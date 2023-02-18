#include <stdio.h>
/*unsigned를 잘못 사용한 경우*/

int main(void) {
	unsigned int a; //항상 양수만 저장하고 %u로 출력한다.정수형을 양수 전용으로 쓰고 싶을 때는 unsigned를 사용한다. 

	a = 4294967295;		//큰 양수 저장 
	printf("%d\n", a);	//%d로 출력
	a = -1;				//음수 저장
	printf("%u\n", a);	//%u로 출력

	return 0;
}
