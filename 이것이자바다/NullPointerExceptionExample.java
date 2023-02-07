package 이것이자바다;
/*null과 NullPointerException
 * 참조타입 변수는 아직 번지를 저장하고 있지 않다는 뜻으로 null값을 가질 수 있다. null도 초기값으로 사용할 수 있기 때문에 null로 
 * 초기화된 참조 변수는 스택 영역에 생성된다. 
 * 참조 타입 변수가 null값을 가지는지 확인하려면 다음과 같이 ==,!= 연산을 수행할 수 있다. 
 * refVar1==null	//결과:false
 * refVar2 !=null	//결과 :true
 * 자바는 프로그램 실행 도중에 발생하는 오류를 예외(Exception)이라고 부른다. 참조변수를 사용하면서 가장 많이 발생하는 예외 중 하나는 NullPointerException
 * 이다. 변수가 null인 상태에서 객체의 데이터나 메소드를 사용하려 할 때 이 예외가 발생한다. 
 * int []intArray=null;
 * intArray[0]=10;	//NullPointerException에러가 발생한다. 
 * 배열변수 int Array에 null을 대입한 상태에서 배열 객체의 0인덱스 항목에 10을 대입하는 코드(intArray[0]=10)을 
 * 실행하면 NullPointerException에러가 발생한다. 이유는 intArray가 참조하는 배열객체가 없으므로 10을 저장할 수 없기 때문이다. 
 * 
 * 에러 해결 방법
 * 참조변수가 객체를 정확히 참조하도록 번지를 대입해야 한다. 
 * 경우에 따라서는 참조타입 변수에 일부러 null을 대입하기도 한다. 프로그램에서 객체를 사용하려면 해당객체를 
 * 참조하는 변수를 이용해야 하는데, 변수에 null을 대입하면 번지를 잃게 되므로 더이상 객체를 사용할 수 없게 된다. */
public class NullPointerExceptionExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[]intArray=null;
		intArray[0]=10;
		
	}

}
