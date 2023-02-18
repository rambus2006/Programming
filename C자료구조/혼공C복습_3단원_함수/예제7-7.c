#include<stdio.h>
/*재귀함수와 반복문의 차이202p 그림이 이해가 잘 안된다. 개학하고 꼭 물어보기
반복문은 for문 안에서 돌아가지만,재귀함수는 이전에 호출했던 곳으로 돌아간다.*/
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