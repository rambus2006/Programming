/*����1��-190p*/
#include <stdio.h>
//���� �´µ� ������ �ȵ�...
 double average(double a, double b);
//�Լ�����
int main(void) {
	double res;
	res = average(1.5, 3.4);
}


//�Լ� ����
double average(double a, double b) {
	double temp;
	temp = a + b;
	return(temp / 2.0);
}