/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/
#include <iostream>
#include <string>
#include <windows.h>

int wmain()
{
    WIN32_FIND_DATAW data;
    std::wstring dir = L"c:\\*";
    HANDLE hFind = FindFirstFileW(dir.c_str(), &data);

    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            std::wcout << data.cFileName << std::endl;
        } while (FindNextFileW(hFind, &data));
        FindClose(hFind);
    }
}