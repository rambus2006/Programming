#include<stdio.h>
#include<Windows.h>

//void gotoxy(int x, int y);

void PrintMiddleLine(const char* ap_string, int a_space_count) {
	//���� ���̸� a_space_count���� ������ ������ �����ϰ� ���� �����ڸ� '%-39s'���� '%-s'�� ������
	printf("\t��% -*s�� \n", a_space_count, ap_string);
}

void gotoxy(int x, int y) {
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void PrintGameOver(void) {
	gotoxy(5, 3);
	printf("\t\t\t\t���");
}
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
		if (i == 16) {
			printf("\t��");
			//PrintTitle();
			printf("\n");
		}
	}

	//��������
	printf("\t��");
	for (i = 0; i < 214; i++) printf("��");
	printf("��\n");


	PrintGameOver();
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