package 교과서예제;
//74p메소드 오버로딩
/*
 * 같은 클래스 안에 매개변수의 개수, 타입, 순서를 달리하는 동일한 이름의 메소드가 여러개 존재하는 것으로 
 * 이를 통해 객체지향언어의 특징인 다형성을 구현할 수 있다. 메소드 오버로딩은 리턴타입,접근 제어자가 다른 것은 
 * 상관없다. */
 
public class MOverLoadingExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Add a=new Add();
		System.out.println(a.sum("선린","인터넷"));
		System.out.println(a.sum(10,20));
	}

}
class Add{
	String sum(String s1,String s2) {	//String 타입의 매개변수를 갖는 sum(String s1,String s2)메소드가 실행된다.
		return s1+s2;
	}
	int sum(int i1,int i2) {			//int 타입의 매개변수를 갖는 sum(int i1,int i2)메소드가 실행된다. 
		return i1+i2;
	}
}