#include<stdio.h>
//������ ���� �ʱ�ȭ�� A�迭�� ���� �����Ͽ� B�迭�� ä�� �� ����ϴ� ���α׷��� �ۼ��غ�����
int main(void) {
	int A[3] = { 1,2,3 };
	int B[10];
	int i;
	int count = sizeof(B) / sizeof(B[0]);		//sizeof�� �迭�� ũ�⸦ ����Ʈ ������ ����ϱ� ������ (�迭��ü�� ũ��/�迭��� �ϳ��� ũ��)
												//�� ����� �迭 ����� ������ ���ؾ� �Ѵ�. 
	for (i = 0; i < count; i++) {
		B[i] = A[i % 3];
	}
	for (i = 0; i < count; i++) {
		printf("%5d", B[i]);
	}
	return 0;
}