/*반환값이 없는 함수 
-데이터를 받아 단지 화면에 출력하는 함수라면 반환값이 필요없다. 

예를 들어 문자와 숫자를 인수로 받으면 문자를 숫자만큼 화면에 출력하는 함수를 생각해보자
화면에 출력한 내용이 함수가 수행한 결과이므로 호출한 곳으로 특별히 값을 반환할 필요가 없다. 
매개변수의 빈자리에 void를 사용했던 것처럼 이때는 반환형의 자리에 void를 사용합니다. */

#include<stdio.h>

void print_char(char ch, int count);	//함수 선언

int main(void) {
	print_char('@', 5);			//문자와 숫자를 주고 함수 호출
	return 0;
}

void print_char(char ch, int count) {	//매개변수는 있으나 반환형은 없다. 
	int i;
	for (i = 0; i < count; i++) {	//i는 0부터 -1까지증가, count번 반복
		printf("%c", ch);	//매개변수ch에 받은 문자 출력
	}
	return 0;
}