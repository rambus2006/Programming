#include <stdio.h>

int main(void) {
	char fruit[20] = "strawberry";		//char �迭 ����� ���ڿ� �ʱ�ȭ

	printf("���� : %s\n", fruit);		//�迭������ ����� ���ڿ� ���
	printf("������ : %s %s\n", fruit, "jam");	//���ڿ� ����� ���� %s�� ���

	//Stirng�� ����� �� %s�� ����Ѵ�. 
	//char�迭�� ���ڿ��� �����ϴ� ������ ������ �Ѵ�. 
	//strawberry�� 10�����̹Ƿ� fruit �迭�� ũ��� �ּ��� 11���� Ŀ�� �Ѵ�. �迭�� ũ�Ⱑ �� ũ���� ���ڿ� ������ null ���ڰ� �����Ƿ�
	//printf�Լ��� null���� �������� ����� ���ڿ��� ����մϴ�. 
	return 0;
}