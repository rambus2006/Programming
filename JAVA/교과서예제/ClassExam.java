package 교과서예제;
//59p객체 생성
public class ClassExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student kim = new Student();		//Student클래스형의 객체 참조형 변수 kim을 선언 및 생성한다.
		kim.name="김현우";	//의 멤버변수 값을 초기화 한다.
		kim.grade=2;
		System.out.println("학생의 이름은"+kim.name+"이고,"+kim.grade+"학년입니다.");
	}
}
//Student 클래스를 정의한다.
class Student{
	String name;
	int grade;
	int ban;
	int nunmber;
	String telephone;
}