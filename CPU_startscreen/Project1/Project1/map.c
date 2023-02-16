#include<stdio.h>



void PrintMiddleLine(const char* ap_string, int a_space_count) {
	//줄의 길이를 a_space_count변수 값으로 수정이 가능하게 형식 지정자를 '%-39s'에서 '%-s'로 수정함
	printf("\t│% -*s│ \n", a_space_count,ap_string);
}

int main(void) {
	//└─┘┌─┐─│
	int i;
	//1
	printf("\n\n\n");
	printf("\t┌");
	for (i = 0; i < 214; i++) printf("─");
	printf("┐\n");

	for (i = 0; i < 50; i++) {
		PrintMiddleLine("", 214);
	}
	void menuDraw();
	//마지막줄
	printf("\t└");
	for (i = 0; i < 214; i++) printf("─");
	printf("┘\n");

	return 0;
}
//메뉴 출력
void menuDraw() {
	gotoxy(22, 12);
	printf("> 게 임 시 작");
	gotoxy(24, 13);
	printf("게 임 정 보");
	gotoxy(24, 14);
	printf("  종 료  ");
}