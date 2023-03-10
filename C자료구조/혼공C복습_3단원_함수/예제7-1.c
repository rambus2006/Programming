/*함수
표준라이브러리함수:특정 기능을 미리 약속하고 프로그램에서 바로 사용할 수 있게 구현되어 있는 함수 
함수 정의:함수를 실제 코드로 만드는 것이며 기능을 구현합니다. 
함수 호출:함수 호출을 해야지 함수를 사용할 수 있습니다. 
함수 선언:프로그램의 상단에서 어떤 함수를 사용할 것이라고 컴파일러에 정보를 주는 역할을 합니다. 
{함수 정의}
<함수를 만들기 전 생각해 보아야 하는 것(함수원형)>
1.함수의 기능에 맞는 이름은 무엇인가?---------------1. 함수명의 기준
->구현하려는 기능=더하기=영어로sum
2.함수가 기능을 수행하는데 필요한 데이터는 무엇인가?--2.매개변수
->더하려는 정수2개
3. 함수가 수행된 후의 결과는 무엇인가?---------------3.반환형
->정수(정수를 2개 더한 값은 정수)

<함수의 형식>
반환형 함수명(매개변수1,매개변수2){
	//함수가 수행하는 명령, 결괏값(매개변수1+매개변수2)를 돌려보냄
}
*/
#include <stdio.h>

int sum(int x, int y);	//sum함수 선언

int main(void) {		//main함수 시작
	int a = 10, b = 20;	//두 정수를 더한 결과(result)를 저장할 변수
	int result;

	result = sum(a, b);	//sum함수 호출
	printf("result : %d\n", result);

	return 0;
}//main함수의 끝

int sum(int x, int y)	//sum함수 정의시작
{
	int temp;		//두 정수의 합을 잠시 저장할 변수 
	temp = x + y;	//x와 y의 합을 temp에 보관
	return temp;	//temp의 값을 반환
}//sum함수의 끝

/*
함수명 : 기능을 충분히 예상할 수 있도록 적절한 이름을 선택하며, 변수 선언 규칙에 따라 만듭니다.
매개변수 : 함수가 처리할 데이터를 저장하는 변수로, 함수명 옆의 괄호 안에 선언합니다. 
반환형:함수가 기능을 수행한 후에 호출한 곳으로 돌려줄 값의 자료형을 적습니다.
-함수 안에서만 사용하는 변수명은 다른 함수의 변수명과 같을 수 있다. 
=======================================================================================================================
<함수호출>
함수를 사용하기 위해서 함수 호출이 필요하다.함수를 호출할 때는 이름을 사용하며 함수에 필요한 데이터를 괄호 안에 
넣어주는데, 이를 인수라 합니다. 
result=sum(a,b) //이부분이 함수 호출 부분

<함수 선언>
컴파일러가 새로 만든 함수를 인식할 수 있도록 알리는 역할을 한다.
함수 앞에 한다. 
선언방법은 
반환형 함수명(매개변수);
이다. 함수원형에 세미콜론을 붙이면 된다. 

<함수 선언이 필요한 이유>
-함수 선언에서 반환값의 형태를 확인하기 때문
-함수의 호출 형식에 문제가 없는지 검사합니다. 
*/