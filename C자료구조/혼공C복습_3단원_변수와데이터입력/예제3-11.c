#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
	char grade;		//������ �Է��� ����
	char name[20];	//�̸��� �Է��� �迭

	printf("���� �Է� : ");	//�Է� �ȳ� �޼��� 
	scanf("%c",&grade);	//���� �Է� �ޱ�
	printf("�̸� �Է� : ");	//�̸� �Է� �ȳ� �޼���
	scanf("%s",name);	//�̸� �Է� �ޱ� 
	printf("%s�� ������ %c�Դϴ�.\n",name, grade);	//���

	return 0;
}