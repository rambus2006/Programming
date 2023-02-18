//81p 확인문제 
//답은 맞는데 프로그램 에러가 계속 난다. 
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(void) {
	char fruit[20];
	int cnt;

	prinf("좋아하는 과일 : ");
	scanf("%s",fruit);
	pritnf("몇 개? : ");
	scanf("%d",&cnt);
	printf("%s를 %d개 드립니다.\n",fruit,cnt);

	return 0;
}