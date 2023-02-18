#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*여러가지 함수 유형
1.매개변수가 없는 함수*/

int main(void){
	int result;

	result = get_num();		//함수호출,반환값은 result에 저장
	printf("반환값 : %d\n", result);
	return 0;
}

int get_num(void) {	//함수원형 : 매개변수가 없고 반환형만 있다.
	int num;
	printf("양수 입력 : ");
	scanf("%d", &num);

	//음수를 입력될때 경고메세지를 출력하고 다시 입력받기 - 예외 처리
	while (num < 0) {
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}
	return num;
}
//예외처리 : 프로그램의 사용자는 종종 프로그램을 만든 의도와 다른 사용법으로 프로그램을 비정상 종료시킵니다.이처럼 
//프로그램을 실행하다가 발생할 수 있는 예외 상황에 대비해 코드를 추가하는 것이 예외 처리입니다.

