package 겨울방학과제;
/*
 * 5.2차원 배열에 1,2학기 성적을 다음과 같이 저장하고 3년간의 전체 평균 점수를 구하라 
 * 조건
 * 1.키보드를 통해서 입력받는다. 
 * 2.2차원 배열 score[3][2]을 선언하라
 * 3.평균 점수는 소수점 이하 둘째자리까지 출력한다. 
 */
import java.util.Scanner;
public class Grade5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		//변수 선언
		double sum=0;
		double avg=0;
		double score[][]= new double[3][2];	//2차원 배열 선언하기 
		
		for(int i=0;i<3;i++) {
			for(int j=0;j<2;j++) {
				System.out.print(i+1 + "학년 " + j+1 + "학기 점수 입력 : ");
				score[i][j]=scan.nextDouble();
				sum+=score[i][j];
			}
		}
		avg=(sum/6);
		System.out.printf("3년간 의 평균 : %.2f",avg);
		
		
	}

}
