package 겨울방학과제;

import java.util.Scanner;
/*2. 학생 수를 입력받아 한 학급의 성적을 처리하는 프로그램을 작성하시오
 * 1. 학생별 점수 3개를 입력받아 2차원 배열에 저장한다. 
 * 2. 각 학생은 시험을 3번 본 다음 그 중 가장 좋음(최고점)을 가지고 평점을 계산한다. 
 * 3. 최고점이 90점 이상이면 5,80점 이상이면 4,70점 이상이면 3,60점 이상이면 2,그나머지는 1로 한다. 
 * 4. 한 학급의 인원수(학생수)는 입력을 받는다. 
 * 5. 100보다 크거나 0보다 작은 수 입력하면 '다시입력하세요==>'메시지 출력
 * */
public class Grade {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		System.out.print("학생수를 입력 : ");
		int studentnumber=scan.nextInt();
		int a[][]=new int[studentnumber][3];
		int i=0;
		int j=0;
		int max=a[i][0];
		int grade=0;
		int num=1;
		//점수 입력받기 
		for(i=0;i<studentnumber;i++) {
			 System.out.print("점수 1 입력 : ");
				a[i][0]=scan.nextInt();
			System.out.print("점수 2 입력 : ");
				a[i][1]=scan.nextInt();
			System.out.print("점수 3 입력 : ");
				a[i][2]=scan.nextInt();
		
		//최대값구하기
		//for(int x=0;x<a.length;x++) {
			for(int y=0;y<3;y++) {
				if(max<a[i][y]) {
					max=a[i][y];
				}
			}
		//}
		//평점 구하기
		if(max>=90) {
			grade=5;
		}else if(max>=80) {
			grade=4;
		}else if(max>=70) {
			grade=3;
		}else if(max>60) {
			grade=2;
		}else {
			grade=1;
		}
		}
		System.out.println("==============================================================");
		System.out.printf("순번"+"\t"+"점수1"+"\t"+"점수2"+"\t"+"점수3"+"\t"+"최고점"+"\t"+"평점");
		System.out.println("\n==============================================================");
		for(i=0;i<studentnumber;i++) {
			System.out.printf("\n"+num+"\t"+a[i][0]+"\t"+a[i][1]+"\t"+a[i][2]+"\t"+max+"\t"+grade+"\n");
			num++;
		}
		
		
	}
}
