#include <stdio.h>

/* 구조체 */
typedef struct Node 
{
	double data;
	struct Node* next;
} Node;


/* 전역 변수*/
Node* head = NULL;
int count = 0;
/* 함수 */
void insertNode(Node* node, double data);
void deleteNode(Node* node, int index);
void printNode(Node* node);

/* 메인 함수 */
int main(void) {
	/* 지역 변수 */
	int input = 0;
	double data;
	int index = 0;

	while (1) 
	{
		printf("1.삽입\n2.삭제\n3.출력\n4.종료\n");
		scanf("%d", &input);

		/* 노드 생성 */
		switch (input)
		{
		case 1 :
			printf("삽입할 실수 입력 : ");
			scanf("%lf", &data);
			insertNode(head, data);
			break;

		case 2 :
			printf("삭제할 위치 지정 : ");
			scanf("%d", &index);
			deleteNode(head, index);
			break;

		case 3 :
			printNode(head);
			break;

		case 4 :
			exit(1);
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}
/* 함수 정의 */

void printNode(Node* node)
{
	if (node != NULL)
	{
		Node* curr = head;
		while (curr != NULL)
		{
			printf("%.1lf\t", curr->data);
			curr = curr->next;
		}
		printf("\n");
	}
	else
	{
		printf("값 없음");
	}
}



void insertNode(Node* node, double data)
{
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = NULL;

	if (node == NULL) {
		head = newnode;
	}
	else {
		/* NULL이 나올 때 까지 노드를 탐색해서 NULL이 나오면 거기에 newnode 붙힌다. */
		Node* prev = head; 
		Node* curr = head->next;

		while (curr != NULL)
		{
			prev = curr;
			curr = prev->next;
		}
		prev->next = newnode;

	}
	count++;
}
void deleteNode(Node* node, int index)
{
	Node* del = head;
	Node* fdel = NULL;

	if (index == 0)
	{
		del = head;
		head = del->next;
	}
	else
	{

		for (int i = 0; i < index; i++)
		{
			fdel = del;
			del = fdel->next;
		}
		fdel->next = del->next;
	}

	count--;
	free(del);

}