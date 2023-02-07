package 이것이자바다;
/*153p문자열(String 타입)
 * 자바의 문자열은 String 객체로 생성된다. 
 * String name;	//String 타입 변수 name선언
 * name="홍길동";	//name변수에 문자열 대입 
 * String hobby="여행";	//String 타입 변수 hobby를 선언하고 문자열 대입 
 * -name변수와 hobby변수에 문자열 리터럴이 대입되면 문자열은 String 객체로 생성되고, 객체의 번지가 각각 대입된다. */
public class EqualsExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String strVar1="홍길동";
		String strVar2="홍길동";
		
		if(strVar1==strVar2) {
			System.out.println("strVar1과 strVar2는 참조가 같음");
		}else {
			System.out.println("strVar1과 strVar2는 참조가 다름");
		}
		
		if(strVar1.equals(strVar2)) {
			System.out.println("strVar1과 strVar2는 문자열이 같음");
		}
		
		String strVar3=new String("홍길동");
		String strVar4=new String("홍길동");
		
		if(strVar3==strVar4) {
			System.out.println("strVar3과 strVar4는 참조가 같음");
		}else {
			System.out.println("strVar3과 strVar4는 참조가 다름");
		}
		if(strVar3.equals(strVar4)) {
			System.out.println("strVar3와 strVar4는 문자열이 같음");
		}
	}

}
