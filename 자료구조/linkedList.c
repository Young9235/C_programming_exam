#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ܼ� ���Ḯ��Ʈ�� ��带 ����ü�� ����
typedef struct listNode {
	char data[4];				// ����� ���� ��� ����
	struct listNode* link;		// ����� �ּҸ� ��� ����
} listNode;

// ����Ʈ ������ ��Ÿ���� head��� ����
typedef struct {
	listNode* head;
} linkedList_h;

// �ܼ����Ḯ��Ʈ�� ó�� ��� ������ �� ȣ���� �Լ� ����
linkedList_h* craeteLinkedList_h(void)
{
	linkedList_h* L;		// head����� ������ L
	L = (linkedList_h*)malloc(sizeof(linkedList_h));	//L�� �޸� ���� �Ҵ�
	L->head = NULL;		// head�� �� null
	return L;
}

// �ܼ����Ḯ��Ʈ�� ��ü �޸� ���� �Լ�
void freeLinkedList_h(linkedList_h* L)
{
	listNode* p;
	while (L->head != NULL)
	{
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

// ���Ḯ��Ʈ ������� ���
void printList(linkedList_h* L) {
	listNode* p;
	printf("L = (");
	p = L->head;			// p�� �ʱⰪ head�� ����
	while (p != NULL)		// head�� null�� �ƴ� ���� �� ���� ����� �ּҰ� ��� ������ ��� ����
	{
		printf("%s", p->data);		// head�� �ּҰ� ����Ű�� ��� ���� ������ ���
		p = p->link;				// p�� ����� link������ �ʱⰪ ����
		if (p != NULL)				// head�� �ּҰ� ����Ű�� ����� link�� null�� �ƴ� �� ����
		{
			printf(", ");			
		}
	}
	printf(") \n");
}

int main(void)
{
	return 0;
}