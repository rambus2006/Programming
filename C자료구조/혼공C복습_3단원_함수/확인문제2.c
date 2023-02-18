#include<stdio.h>

double centi_to_meter(double cm);	//함수 선언

int main(void) {

	double res;//함수의 반환값을 저장할 변수

	res = centi_to_meter(187);	//함수 호출,반환값을 res에 저장
	printf("%.2lfm\n", res);	//반환된 res의 값 출력

	return 0;
}
double centi_to_meter(double cm) {	//함수정의
	double m;	//필요한 변수 선언

	m = (cm / 100);	//매개변수 cm의 값을 m단위로 환산

	return m;	//환산된 값 반환
}