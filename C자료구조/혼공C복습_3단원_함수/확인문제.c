/*문제1번-190p*/
#include <stdio.h>
//답은 맞는데 실행이 안됨...
 double average(double a, double b);
//함수선언
int main(void) {
	double res;
	res = average(1.5, 3.4);
}


//함수 정의
double average(double a, double b) {
	double temp;
	temp = a + b;
	return(temp / 2.0);
}