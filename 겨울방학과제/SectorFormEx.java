package 겨울방학과제;

import java.util.Scanner;
public class SectorFormEx extends SectorForm {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		
		System.out.println("반지름 입력 : ");
		double r=scan.nextDouble();
		SectorForm s1 = new SectorForm();
		s1.radius=r;
		s1.area(r);
		s1.circum(r);
		
		System.out.println("반지름 " + r + "인 부채꼴의 면적 : " + s1.area(r) + ", 둘레 : "+s1.circum(r));
		
	}

}
