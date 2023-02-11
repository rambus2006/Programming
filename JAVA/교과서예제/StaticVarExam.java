package 교과서예제;
//62p 클래스 변수
/*
 * 멤버변수의 종류
 * -클래스변수(앞에 static):
 * -객체변수
 * 둘의 차이점
 * 객체변수:객체가 생성될 때마다 기억공간이 각각 확보됨
 * 클래스변수:클래스가 로딩되는 과정에서 기억공간이 한번만 확보되고 해당 클래스 타입의 모든 객체들은 클래스 변수를 공유하게 된다.*/
 
public class StaticVarExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student kim=new Student();
		Student jang=new Student();
		Student bak=new Student();
		System.out.println("생성된 학생 객체 수는 "+Student.count+"입니다.");
	}

}
class Student{
	String name;
	int grade;
	static int count=0;
	public Student() {
		count++;
	}
}
