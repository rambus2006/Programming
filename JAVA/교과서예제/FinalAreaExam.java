package 교과서예제;
//64p상수
/*멤버변수에 final이 붙으면 해당 멤버변수는 더이상 값을 변경할 수 없다는 의미를 갖는다. 
 * 즉,final이 붙은 변수는 단 한번 초기화할 수 있으며, 그뒤로는 값을 변경할 수 없는 상수 변수이다. 상수의 이름은 대문자 사용!
 * 
 * 코드에러
 * Exception in thread "main" java.lang.Error: Unresolved compilation problem: 
	The final field FinalAreaExam.PI cannot be assigned

	at 교과서예제.객체생성.FinalAreaExam.main(FinalAreaExam.java:9)
	상수 PI는 값을 변경할 수 없으므로 실행하면 에러가 발생한다. */
public class FinalAreaExam {
	public static final double PI=3.14;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		PI=3.141592;
	}

}
