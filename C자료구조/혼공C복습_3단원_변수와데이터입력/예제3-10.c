#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

int main(void) {
	int age;	//���̸� ������ ������ ����
	double height;	//Ű�� �Ǽ��� ������ ����

	printf("���̿� Ű�� �Է��ϼ��� : "); //�Է� �ȳ� �޼��� ���
	scanf_s("%d%lf", &age, &height);	//�Է¹ޱ�
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);	//�Է°� ���

	return 0;
}