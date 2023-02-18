#include <stdio.h>

int main(void) {
	short sh = 32767;		//short 형의 최댓값 초기화
	int in = 2147483647;	//int 형 최댓값 초기화
	long ln = 2147483647;	//long형 최댓값 초기화 
	long long lln = 123451234512345;	//아주 큰 값 초기화	

	printf("short형 변수 출력 : %d\n", sh);	
	printf("int 형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln); //long long은 lld로 출력

	printf("long long 형의 크기 : %d바이트\n", sizeof(long long));
}
//*char <= short <= int <= long <=long long
/*자료형의 크기가 궁금하다면 sizeof연산자
sizeof는 자료형의 크기를 바이트 단위로 계산해주며 다음과 같이 사용한다. 
printf("long long 형의 크기 : %d바이트\n",sizeof(long long));
*/