//219p
#include<stdio.h>

int main(void)
{
	int A[3] = { 1,2,3 };		//�ʱ�ȭ�� A�迭
	int B[10];					//�ʱ�ȭ���� ���� B�迭
	int i;

	for (i = 0; i < sizeof(B); i++) {	//B�迭�� ä��� ���� B�迭�� ����� ������ŭ �ݺ�
		B[i] = A[i % 3];		//A�迭 ÷�ڰ� 0~2�� ������ ������ ������ ���
	}
	for (i = 0; i < sizeof(B); i++) {
		printf("%5d",B[i]);		//B�迭 ���
	}
}

