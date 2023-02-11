package 교과서예제;
//61p Student 클래스의 멤버변수 접근 권한을 조정한예제
/*
 * 03)멤버변수
 * 멤버변수:클래스를 정의할 때 메소드밖에 선언하는 변수로서 객체가 가지는 정적인 특성을 나타내는데 사용한다.
 * 멤버변수 선언 방법
 * [접근제어자] (static/final) 데이터형 변수명;
 * <멤버변수에 대한 접근 권한이나 활용방법을 표현하는 접근 제어자를 사용한다.>
 * -접근권한:public ,protected,private
 * -활용방법:static,final
 * 1.접근 권한
 * 접근제어자	| 설명
 * ----------------------------------------------
 * private  | 자신 클래스 안에서만 사용할 수 있는 벰버 변수 선언,외부에서 접근 불가
 * default  |-접근 권한 modifier를 지정하지 않은 경우
 * 			|-동일 패키지의 클래스에서만 접근 가능
 * protected|-동일 패키지의 클래스 또는 동일 패키지는 아니지만 하위 클래스 관계인 클래스에서만 접근 가능
 * public	|-모든 클래스에서 접근 가능
 * 
 * 코드 에러
 * Exception in thread "main" java.lang.Error: Unresolved compilation problems: 
	The field Student.telephone is not visible
	The field Student.telephone is not visible

	at 교과서예제.객체생성.MemberExam.main(MemberExam.java:28)
	멤버변수 telephone은 private접근 권한을 가지므로 자신의 클래스인 Student에서만 사용가능하다. 따라서 , MemberExam 클래스에서 사용하면 접근 권한 에러가 발생한다.
 * */
public class MemberExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student kim=new Student();
		kim.name="김현우";
		kim.grade=2;
		kim.telephone="111-1111";
		System.out.println("학생의 이름은"+kim.name+"이고,학년은"+kim.grade+"이고,전화번호는"+kim.telephone+"입니다.");
	}
}
class Student{
	public String name;		//모든 클래스에서 접근 가능한 멤버 변수 name
	int grade;				//동일 패키지에서만 접근 가능한 멤버 변수 grade
	int ban;				//동일 패키지에서만 접근 가능한 멤버변수 class
	int number;				//동일패키지에서만 접근 가능한 멤버변수 number
	private String telephone;	//자신의 클래스 안에서만 접근 가능한 멤버변수 telephone
}