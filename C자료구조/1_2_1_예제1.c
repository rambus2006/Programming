
//"��" "ȭ" "��" "��" "��" �� ������ �����Ͱ����� ���� ���Ḯ��Ʈ�� ������
#include <stdio.h>

typedef struct node {
	char data;
	struct node* next;
}Node;

Node* head = NULL;

int main(void) {
	head = (Node*)malloc(sizeof(Node));

	//��� ����
	Node* node1 = (Node*)malloct(sizeof(Node));
	head->next = node1;
	node1->data = "ȭ";

	Node* node2 = (Node*)malloc(sizeof(Node));
	node1->next = node2;
	node2->data = "��";
	node2->next = NULL;

	//���� ����Ʈ ���
	Node* tmp = head;
	while (tmp != NULL) {
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}

	return 0;
}