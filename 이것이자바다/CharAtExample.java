package 이것이자바다;
/*문자 추출
 * 문자열에서 특정 위치의 문자를 얻고 싶다면 charAt()메소드를 이용할 수 있다. charAt()메소드는 매개값으로 
 * 주어진 인덱스의 문자를 리턴한다. 여기서 인덱스란 0에서부터 문자열의 길이 -1 까지의 번호를 말한다. */
public class CharAtExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String ssn="9506241230123";
		char sex=ssn.charAt(6);
		switch(sex) {
		case '1':case'3':
			System.out.println("남자입니다.");
			break;
		case'2': case'4':
			System.out.println("여자입니다. ");
			break;
		}
	}

}
