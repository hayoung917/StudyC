#include <stdio.h>

/* ����ü */
typedef struct Node 
{
	double data;
	struct Node* next;
} Node;


/* ���� ����*/
Node* head = NULL;
int count = 0;
/* �Լ� */
void insertNode(Node* node, double data);
void deleteNode(Node* node, int index);
void printNode(Node* node);

/* ���� �Լ� */
int main(void) {
	/* ���� ���� */
	int input = 0;
	double data;
	int index = 0;

	while (1) 
	{
		printf("1.����\n2.����\n3.���\n4.����\n");
		scanf("%d", &input);

		/* ��� ���� */
		switch (input)
		{
		case 1 :
			printf("������ �Ǽ� �Է� : ");
			scanf("%lf", &data);
			insertNode(head, data);
			break;

		case 2 :
			printf("������ ��ġ ���� : ");
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
/* �Լ� ���� */

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
		printf("�� ����");
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
		/* NULL�� ���� �� ���� ��带 Ž���ؼ� NULL�� ������ �ű⿡ newnode ������. */
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