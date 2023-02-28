package 겨울방학과제;
/*
 * 양의 정수 10개를 입력받아 배열에 저장하고 제일 큰 수를 출력하라
 * 조건
 * 1.키보드를 통해서 입력받는다.
 * 2.양의 정수만 입력된다고 가정한다. 
 */
import java.util.Scanner;
public class Max {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		int max;//최댓값을 담을 변수
		
		int []num=new int[10];	//배열 선언
		System.out.print("1번째 수 : ");
		num[0]=scan.nextInt();
		max=num[0];
		
		for(int i=1;i<10;i++) {
			System.out.print(i+1 + "번째 수 : ");
			num[i]=scan.nextInt();
			if(max<num[i]) {
				max=num[i];
			}
		}
		System.out.println("가장 큰 수 : " + max);
		
	}

}
