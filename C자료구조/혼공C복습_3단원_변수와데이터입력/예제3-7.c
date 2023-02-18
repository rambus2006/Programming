#define _CRT _SECURE _NO _WARNINGS
#include <stdio.h>
#include <string.h>		//문자열을 다룰 수 있는 string.h 헤더파일 포함
/*char 배열에 문자열 복사*/
int main(void) {
	char fruit[20] = "strawberry";	//strawberry로 초기화

	printf("%s\n", fruit);		//strawberry출력
	strcpy(fruit, "banana");	//strcpy함수는 string copy의 뜻으로 문자열을 복사한다. 
	printf("%s\n", fruit);		//banana 출력

	return 0;
}