#include <stdio.h>
//1.2.1.��ũ�� ����Ʈ�� ��� ǥ�� 

int main(void) {

	typedef int ElementType;

	typedef struct tagNode
	{
		ElementType Date;	//������
		struct Node* NextNode;//���� ���
	}Node;

	return 0;
}