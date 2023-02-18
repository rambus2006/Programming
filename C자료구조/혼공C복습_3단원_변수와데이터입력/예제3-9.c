#include <stdio.h>
/*scanf함수
-scanf함수 : -키보드에서 입력한 값을 변수에 저장할 때 사용합니다. 
			 -변수의 형태에 맞는 변환 문자를 사용하고 입력할 변수 앞에 &기호를 붙이면 됩니다. 
-ex) scanf("%d",&a);
*/
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int a;

	scanf("%d",&a);		//여기서 변수 a를 입력받음
	printf("입력된 값 : %d\n",a);	//입력한 값 출력

	return 0;
}
/*scanf함수 사용의 유의점
1.scanf함수에서 변수명을 지정할 때는 &를 꼭꼭꼭! 붙여줘야 한다.
2.scanf함수에서 사용한 변환문자와 맞는 형태의 데이터를 입력해야 합니다. 
*/