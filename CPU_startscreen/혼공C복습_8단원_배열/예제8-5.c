/*문자열 대입
char형 배열이 문자열을 저장하는 변수의 역할을 하므로 초기화된 이후에도 얼마든지 새로운 문자열을 저장할 수 있다. 단, 문자열의 
길이가 다를 수 있으므로 일반 변수처럼 대입연산자를 사용하는 것은 불가능한데, 이때 strcpy함수를 사용한다.

{strcpy함수}
-char형 배열에 새로운 문자열을 저장하는 함수로, 저장할 문자열의 길이를 파악하여 그 길이만큼만 char형 배열에 복사한다. 물론 문자열
끝에 널 문자도 자동으로 붙여준다. 
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s%s\n", str1, str2);

	return 0;
}
