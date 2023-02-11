package 교과서예제.객체생성;
//78p
/*
 *Student 클래스가 다음과 같이 작성되어 있을 때 , Student클래스를 상속 받아 다음 조건에 맞는 Leader클래스를 만들어 실행결과와 같이 출력하여라
 *1.학급 회장인지 판정하는 멤버변수 정의
 *2.객체 생성 시 학급회장 매개변수를 전달하는 생성자 작성
 *3.학급회장 판정 메소드 정의*/
class Student{
	String name;
	String hakbun;
	String phone;
	String juso;
	String major;
	public Student() {}
	public Student(String name,String hakbun) {
		this.name=name;
		this.hakbun=hakbun;
	}
	public void study() {
		System.out.println("공부하다.");
	}
	public void eat() {
		System.out.println("식사하다");
	}
	public void test() {
		System.out.println("시험보다");
	}
	public void extra_act() {
		System.out.println("동아리 활동을 하다.");
	}
}
class Leader extends Student() {
	
}
public class MainClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
