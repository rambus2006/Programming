#include<stdio.h>

void PrintMiddleLine(const char* ap_string, int a_space_count) {
	//���� ���̸� a_space_count���� ������ ������ �����ϰ� ���� �����ڸ� '%-39s'���� '%-s'�� ������
	printf("\t��% -*s�� \n", a_space_count,ap_string);
}
/*void PrintTitle() {
	printf("		���    "); 
	printf("	���	    ");
	printf("���		    ");
	printf("���		    ");
	printf("	����	    ");
	printf("	   ����   ");
	printf("		  ���  ");
	printf("			��  ");
	printf("��	  ���  ");
	printf("	����      ");
}*/

int main(void) {
	//����������������
	int i;
	//1
	printf("\n\n\n");
	printf("\t��");
	for (i = 0; i < 214; i++) printf("��");
	printf("��\n");

	//void PrintTitle();
	for (i = 0; i < 50; i++) {
		PrintMiddleLine("", 214);
		if (i == 40) {
			//��� ����
			printf("\t");
			printf("��");
			for (int j = 0; j < 214; j++) {
				printf("��");
			}
			printf("��");
			printf("\n");
		}
	}
	
	//��������
	printf("\t��");
	for (i = 0; i < 214; i++) printf("��");
	printf("��\n");

	
	
	return 0;
}
//�޴� ���
/*void menuDraw() {
	gotoxy(22, 12);
	printf("> �� �� �� ��");
	gotoxy(24, 13);
	printf("�� �� �� ��");
	gotoxy(24, 14);
	printf("  �� ��  ");
}
*/