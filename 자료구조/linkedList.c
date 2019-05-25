#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 단순 연결리스트의 노드를 구조체로 정의
typedef struct listNode {
	char data[4];				// 노드의 값을 담는 변수
	struct listNode* link;		// 노드의 주소를 담는 변수
} listNode;

// 리스트 시작을 나타내는 head노드 정의
typedef struct {
	listNode* head;
} linkedList_h;

// 단순연결리스트의 처음 노드 생성할 때 호출할 함수 셋팅
linkedList_h* craeteLinkedList_h(void)
{
	linkedList_h* L;		// head노드의 변수는 L
	L = (linkedList_h*)malloc(sizeof(linkedList_h));	//L의 메모리 공간 할당
	L->head = NULL;		// head의 값 null
	return L;
}

// 단순연결리스트의 전체 메모리 해제 함수
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

// 연결리스트 순서대로 출력
void printList(linkedList_h* L) {
	listNode* p;
	printf("L = (");
	p = L->head;			// p의 초기값 head로 셋팅
	while (p != NULL)		// head가 null이 아닐 때와 그 뒤의 노드의 주소가 계속 존재할 경우 실행
	{
		printf("%s", p->data);		// head의 주소가 가리키는 노드 값의 데이터 출력
		p = p->link;				// p를 노드의 link값으로 초기값 셋팅
		if (p != NULL)				// head의 주소가 가리키는 노드의 link가 null이 아닐 때 실행
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