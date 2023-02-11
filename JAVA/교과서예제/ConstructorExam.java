package 교과서예제;


//67p 생성자
/*
 * 01)생성자 정의 
 * 생성자는 클래스로부터 객체를 생성할 때 객체의 초기화 과정을 기술하는 특수한 메소드이다. 
 * 객체 생성시 항상 호출되어야 하는 메소드이다. 
 * 외형적으로는 일반 메소드와 비슷하지만 차이점들이 있다.
 * <메소드와의 차이점>
 * 1.new연산자와 함께 사용되며 인스턴스 객체 생성시에 호출된다. 
 * 2.객체 생성시에 객체의 멤버변수(객체 변수)를 초기화 하는 일을 주로 한다. 
 * 3.생성자의 이름은 클래스 이름과 동일하며, 일반적으로 첫 문자는 대문자이다.
 * 4.return유형이 없다.
 * 5.생성자가 없는 클래스는 JVM이 자동으로 삽입하는 기본 생성자를 갖는다. 
 * 6.사용자가 정의한 생성자가 있을 경우에는 JVM이 삽입한 기본생성자는 없어진다.
 * 
 * [접근제어자]생성자이름(매개변수1,매개변수2...){
 * 	//객체초기화에 필요한 코드
 * }
 * 
 * 코드 결과 
 * 학생의 이름은null입니다.
   학생의 이름은장민재입니다.
	Student클래스형의 객체를 생성할 때,매개변수가 없는 객체의 생성자가 실행되고 (public Student() {}),매개변수가 있는 객체는 (public Student(String n) {
		name=n;
	})생성자가 실행된다. 클래스 Student는 사용자가 정의한 생성자가 있으므로 public Student의 기본 생성자가 없으면 매개변수가 없는 생성자를 실행해야 한느
	kim객체는 생성될 수 없다. 
	
	<생성자 오버로딩>
	클래스는 매개변수의 개수, 타입, 순서를 달리하는 같은 이름의 생성자를 여러개 정의할 수 있으며 이를 생성자 오버로딩이라고 한다. 이러한 다양한 형태의 생성자를 통해
	다양한 객체를 생성함으로써 다형성이 구현될 수 있다. 
 */
public class ConstructorExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student kim=new Student();
		Student jang=new Student("장민재");
		System.out.println("학생의 이름은"+kim.name+"입니다.");
		System.out.println("학생의 이름은"+jang.name+"입니다.");
	}

}
class Student{
	String name;
	int grade;
	int ban;
	int number;
	String telephone;
	public Student() {}
	public Student(String n) {
		name=n;
	}
}
