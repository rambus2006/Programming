#include<stdio.h>

double centi_to_meter(double cm);	//�Լ� ����

int main(void) {

	double res;//�Լ��� ��ȯ���� ������ ����

	res = centi_to_meter(187);	//�Լ� ȣ��,��ȯ���� res�� ����
	printf("%.2lfm\n", res);	//��ȯ�� res�� �� ���

	return 0;
}
double centi_to_meter(double cm) {	//�Լ�����
	double m;	//�ʿ��� ���� ����

	m = (cm / 100);	//�Ű����� cm�� ���� m������ ȯ��

	return m;	//ȯ��� �� ��ȯ
}