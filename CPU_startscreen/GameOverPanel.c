#include<stdio.h>

void PrintG(void);
void PrintOver(void);

int main(void) {
	PrintG();
	PrintOver();
	return 0;
}

void PrintG(void) {
	printf("����������������\t����������������\t����������������������\t����������������\n");   
	printf("��  ������ ��\t�� ������  ��\t�� ������ ������ ��\t�� ������������\n");
	printf("��  �� �� ��\t�� �� ��  ��\t�� �� �� �� �� ��\t�� �� \n");
	printf("��  �� �� ��\t�� �� ��  ��\t�� �� �� �� �� ��\t�� ������������\n");
	printf("��  ������ ��\t�� ������  ��\t�� �� �� �� �� ��\t�� ������������\n");
	printf("����������  ��\t�� ������  ��\t�� �� ������ �� ��\t�� ��\n");
	printf("����������  ��\t�� �� ��  ��\t�� ��     �� ��\t�� ������������\n");
	printf("����������������\t������ ��������\t������     ������\t����������������\n");

	return 0;
}
void PrintOver(void) {
	printf("\t����������������\n");
	printf("\t��  ������ ��\n");
	printf("\t��  �� �� ��\n");
	printf("\t��  �� �� ��\n");
	printf("\t��  �� �� ��\n");
	printf("\t��  �� �� ��\n");
	printf("\t��  ������ ��\n");
	printf("\t����������������\n");

	return 0;
}