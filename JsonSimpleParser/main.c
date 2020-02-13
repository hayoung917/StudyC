/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TOKEN_COUNT   20   // 토큰의 최대 갯수

// 토큰 종류 열거형
typedef enum _TOKEN_TYPE TOKEN_TYPE;
// 토근 구조체
typedef struct _TOKEN TOKEN;
// JSON 구조체
typedef struct _JSON JSON;

enum _TOKEN_TYPE {
    TOKEN_STRING,   // 문자열 토큰
    TOKEN_NUMBER   // 숫자 토큰
};

struct _TOKEN {
    TOKEN_TYPE type;   // 토큰 종류
    // 두 종류중 한 종류만 저장할것이므로 공용체 사용
    union {
        char* string;   // 문자열 포인터
        double number;   // 실수형 숫자
    };
    bool isArray;      // 현재 토큰이 배열인지 표시
};

struct _JSON {
    TOKEN tokens[TOKEN_COUNT];   // 토큰 배열
};

// JSON파일을 읽고 저장된 버퍼의 주소를 리턴한다.
char* readFile(char* filename, int* readSize);
// JSON 파싱 함수
void parseJSON(char* doc, int size, JSON* json);
// JSON 해제 함수
void freeJSON(JSON* json);

// 메인함수
int main(void)
{
    int size;   // 읽은 문자의 갯수
    char* doc = readFile("Example.json", &size);   // 파일을 읽고 버퍼를 가져온다.

    // 넘겨받은 버퍼가 없다면 프로그램을 종료한다.
    if (doc == NULL) { return EXIT_FAILURE; }

    JSON json = { 0 };   // JSON 구조체 변수 선언 및 초기화

    // 읽은 JSON을 파싱
    parseJSON(doc, size, &json);

    int i = 0;
    while (true) {
        // 읽을 문자열이 없다면 반복문을 탈출한다.
        if (json.tokens[i].string == NULL) { break; }

        // 읽은 JSON을 출력한다.
        printf("%s : %s\n", json.tokens[i].string, json.tokens[i + 1].string);

        i += 2;   // 2개의 토큰을 출력하므로 2칸 넘어간다.
    }

    freeJSON(&json);   // json에 할당된 동적 메모리 해제
    free(doc);         // 문서 동적 메모리 해제

    system("pause");
    return EXIT_SUCCESS;
}

char* readFile(char* filename, int* readSize)
{
    FILE* file = fopen(filename, "rb");
    if (file == NULL) { return NULL; }

    int size;      // 파일의 크기
    char* buffer;   // 읽은 파일의 내용을 담을 버퍼


    // 파일의 크기를 구한다
    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // 파일크기 + \0 공간만큼 할당하고 초기화한다.
    buffer = calloc(sizeof(char), size + 1);

    // 파일의 내용을읽고 버퍼에 담는다
    if (fread(buffer, size, 1, file) < 1)
    {
        // 읽은 내용이 없다면 버퍼를 해제, 파일포인터도 닫는다.
        *readSize = 0;
        free(buffer);
        fclose(file);
        return NULL;
    }

    *readSize = size;
    fclose(file);

    return buffer;
}

void parseJSON(char* doc, int size, JSON* json)
{
    int tokenIndex = 0;   // 토큰 인덱스
    int pos = 0;      // 문자의 위치를 저장

    // JSON의 시작형식이 맞는지 확인한다.
    if (doc[pos] != '{') { return; }

    pos++;   // 다음 문자로 넘어간다.

    // JSON 문서의 크기만큼 반복한다.
    while (pos < size)
    {
        // 문자의 종류에 따라 분기한다.
        switch (doc[pos])
        {
        case '"':   // 문자가 "이면 문자열
        {
            char* begin = doc + pos + 1;   // 문자열의 시작위치, 맨 앞의 "를 제외하기 위해 + 1
            char* end = strchr(begin, '"');   // 문자열의 끝 위치를 구한다 즉, 다음 "위치

            // "가 없으면 문법오류 이므로 반복종료
            if (end == NULL) { break; }

            int stringLength = end - begin;   // 문자열의 길이 = 끝위치 - 시작 위치

            // 토큰 배열에 문자열을 저장하고 타입을 지정
            json->tokens[tokenIndex].type = TOKEN_STRING;
            json->tokens[tokenIndex].string = calloc(1, stringLength + 1);
            memcpy(json->tokens[tokenIndex].string, begin, stringLength);

            tokenIndex++;               // 토큰을 저장했으므로 인덱스를 옮긴다.
            pos = pos + stringLength + 1;   // 현재위치 + 문자열 길이 + 1(")
        }
            break;

        default:
            break;
        }

        pos++;   // 다음 문자로 넘어간다.
    }


}

void freeJSON(JSON* json)
{
    // 토큰의 갯수 만큼 반복한다
    for (int i = 0; i < TOKEN_COUNT; i++)
    {
        // 토큰의 종류가 문자열일 경우
        if (json->tokens[i].type == TOKEN_STRING)
        {
            // 할당된 문자열을 해제한다
            free(json->tokens[i].string);
        }
    }
}