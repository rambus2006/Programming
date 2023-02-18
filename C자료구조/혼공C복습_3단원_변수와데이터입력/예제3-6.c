#include <stdio.h>

int main(void) {
	char fruit[20] = "strawberry";		//char 배열 선언과 문자열 초기화

	printf("딸기 : %s\n", fruit);		//배열명으로 저장된 문자열 출력
	printf("딸기잼 : %s %s\n", fruit, "jam");	//문자열 상수를 직접 %s로 출력

	//Stirng을 출력할 때 %s를 사용한다. 
	//char배열은 문자열을 저장하는 변수의 역할을 한다. 
	//strawberry가 10글자이므로 fruit 배열의 크기는 최소한 11보다 커야 한다. 배열의 크기가 더 크더라도 문자열 끝에는 null 문자가 있으므로
	//printf함수는 null문자 이전까지 저장된 문자열만 출력합니다. 
	return 0;
}