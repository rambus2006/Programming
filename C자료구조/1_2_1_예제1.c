
//"월" "화" "수" "목" "금" 등 요일을 데이터값으로 갖는 연결리스트를 만들어보자
#include <stdio.h>

typedef struct node {
	char data;
	struct node* next;
}Node;

Node* head = NULL;

int main(void) {
	head = (Node*)malloc(sizeof(Node));

	//노드 연결
	Node* node1 = (Node*)malloct(sizeof(Node));
	head->next = node1;
	node1->data = "화";

	Node* node2 = (Node*)malloc(sizeof(Node));
	node1->next = node2;
	node2->data = "수";
	node2->next = NULL;

	//연결 리스트 출력
	Node* tmp = head;
	while (tmp != NULL) {
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}

	return 0;
}