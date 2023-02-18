#include<stdio.h>
/*널 문자가 없는 문자열*/
int main(void) {
	char str[5];	//배열이 초기화 되지 않아 쓰레기 값이 남아 있음 

	str[0] = '0';
	str[1] = 'K';
	printf("%s\n", str);

	return 0;
}