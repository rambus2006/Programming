#include <stdio.h>
/*unsigned�� �߸� ����� ���*/

int main(void) {
	unsigned int a; //�׻� ����� �����ϰ� %u�� ����Ѵ�.�������� ��� �������� ���� ���� ���� unsigned�� ����Ѵ�. 

	a = 4294967295;		//ū ��� ���� 
	printf("%d\n", a);	//%d�� ���
	a = -1;				//���� ����
	printf("%u\n", a);	//%u�� ���

	return 0;
}
