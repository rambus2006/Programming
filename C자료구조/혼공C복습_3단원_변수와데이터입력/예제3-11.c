#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
	char grade;		//학점을 입력할 변수
	char name[20];	//이름을 입력할 배열

	printf("학점 입력 : ");	//입력 안내 메세지 
	scanf("%c",&grade);	//학점 입력 받기
	printf("이름 입력 : ");	//이름 입력 안내 메세지
	scanf("%s",name);	//이름 입력 받기 
	printf("%s의 학점은 %c입니다.\n",name, grade);	//출력

	return 0;
}