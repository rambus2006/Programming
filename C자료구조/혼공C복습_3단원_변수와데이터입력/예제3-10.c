#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

int main(void) {
	int age;	//나이를 정수형 변수로 선언
	double height;	//키를 실수형 변수로 선언

	printf("나이와 키를 입력하세요 : "); //입력 안내 메세지 출력
	scanf_s("%d%lf", &age, &height);	//입력받기
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);	//입력값 출력

	return 0;
}