/*세가지 진법의 정수 상수*/
#include <stdio.h>

int main(void) {
	printf("%d\n", 12);	//10진수 정수 상수 출력
	printf("%d\n", 014);//8진수 정수 상수 출력(12는 8진수로 014)
	printf("%d\n", 0xc);//16진수 정수 상수 출력(12는 16진수로 0xc)

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);
	/*<10진수를 8진수나 16진수로 출력하기>
	8진수 출력 - %o
	16진수 소문자 - %x
	16진수 대문자 - %X
	*/
	return 0;
}