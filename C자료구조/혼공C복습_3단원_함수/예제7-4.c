/*매개변수와 반환값이 모두 없는 함수

예를 들어 일정한 문자열을 여러번 출력하는 함수라면 매개변수와 반환값이 모두 필요없습니다. 이때는 함수의 매개변수와 
반환형에 모두 void를 씁니다.반환값과 매개변수가 모두 없는 함수를 간단히 만들어 살펴보겠습니다. 
*/
#include<stdio.h>

void print_line(void);

int main(void) {
	print_line();
	printf("학번\t이름\t전공\t학점\n");
	print_line();

	return 0;
}

//return문이 없다. 또한 호출할 떄 값을 주지 않으며 호출은 수식의 일부가 아닌 독립된 문장으로 쓰입니다.
//print_line함수는 매개변수가 없는 함수와 반환형이 없는 함수의 특징을 모두 포함하는 함수입니다.
void print_line(void) {
	int i;
	for (i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}