#include <stdio.h>
//1.2.1.링크드 리스트의 노드 표현 

int main(void) {

	typedef int ElementType;

	typedef struct tagNode
	{
		ElementType Date;	//데이터
		struct Node* NextNode;//다음 노드
	}Node;

	return 0;
}