#define _CRT _SECURE _NO _WARNINGS
#include <stdio.h>
#include <string.h>		//���ڿ��� �ٷ� �� �ִ� string.h ������� ����
/*char �迭�� ���ڿ� ����*/
int main(void) {
	char fruit[20] = "strawberry";	//strawberry�� �ʱ�ȭ

	printf("%s\n", fruit);		//strawberry���
	strcpy(fruit, "banana");	//strcpy�Լ��� string copy�� ������ ���ڿ��� �����Ѵ�. 
	printf("%s\n", fruit);		//banana ���

	return 0;
}