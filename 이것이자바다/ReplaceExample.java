package 이것이자바다;
/*문자열 대체 
 * 문자열에서 특정 문자열을 다른 문자열로 대체하고 싶다면 replace()메소드를 사용한다. replace()메소드를 기존 문자열은 
 * 그대로 두고, 대체한 새로운 문자열을 리턴한다. 
 * String oldstr="자바프로그래밍"
 * String newstr=oldstr .replace("자바","JAVA");
 * String 객체의 문자열은 변경이 불가한 특성을 갖고 있기 때문에 replace()메소드가 리턴하는 문자열은 원래
 * 문자열의 수정본이 아니라 완전히 새로운 문자열이다. 따라서  newstr변수는 새로 생성된 JAVA프로그래밍 문자열을 
 * 참조한다. */
public class ReplaceExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String oldStr="자바 문자열은 불변입니다. 자바 문자열은 String 입니다. ";
		String newStr=oldStr.replace("자바","JAVA");
		
		System.out.println(oldStr);
		System.out.println(newStr);
	}

}
