package 교과서예제;
//73p 클래스 메소드
public class StaticMethodExam {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student kim=new Student();
		Student jang=new Student();
		Student bak=new Student();
		System.out.println("생성된 학생 객체 수는"+Student.getCount()+"입니다.");
	}

}
class Student{
	String name;
	int grade;
	static int count=0;
	public Student() {count++;}
	public static int getCount() {return count;};	//클래스 변수(공통변수)만 사용가능
}
