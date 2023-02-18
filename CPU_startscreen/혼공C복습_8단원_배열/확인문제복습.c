#include<stdio.h>
//다음과 같이 초기화된 A배열의 값을 복사하여 B배열을 채운 후 출력하는 프로그램을 작성해보세요
int main(void) {
	int A[3] = { 1,2,3 };
	int B[10];
	int i;
	int count = sizeof(B) / sizeof(B[0]);		//sizeof는 배열의 크기를 바이트 단위로 계산하기 때문에 (배열전체의 크기/배열요소 하나의 크기)
												//를 해줘야 배열 요소의 개수를 구해야 한다. 
	for (i = 0; i < count; i++) {
		B[i] = A[i % 3];
	}
	for (i = 0; i < count; i++) {
		printf("%5d", B[i]);
	}
	return 0;
}