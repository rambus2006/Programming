#include<stdio.h>
/*����Լ��� �ݺ����� ����202p �׸��� ���ذ� �� �ȵȴ�. �����ϰ� �� �����
�ݺ����� for�� �ȿ��� ���ư�����,����Լ��� ������ ȣ���ߴ� ������ ���ư���.*/
void fruit(int count);

int main(void)
{
	fruit(1);
	return 0;
}
void fruit(int count) {
	printf("apple\n");
	if (count == 3) return;
	fruit(count + 1);
	printf("jam\n");
}