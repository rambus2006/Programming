package 겨울방학과제;
/*
 * 3. 중심 각도가 90 도인 부채꼴을 위한 클래스를 정의하고, 반지름을 입력받아, 부채꼴을 생성하여 부채꼴의 둘레와 면적을 계산하여 출력하는 프로그램을 작성
 *    하시오.
 *    조건
 *    1.클래스내에 다음 메서드를 작성하여 처리한다. 
 *    부채꼴의 면적 계산 메서드 : double area([매개변수])
 *    부체꼴의 둘레 계산 메서드 : double circum([매개변수])
 *    2. 소수점 아래 출력되도록 한다. 
 */

public class SectorForm {
	//1.멤버변수
	double radius;
	final double PIE=3.14;
	
	//2.생성자 메서드
	public SectorForm() {}

	//3.getter,setter
	public double getRadius() {
		return radius;
	}
	public void setRadius(double radius) {
		this.radius = radius;
	}
	
	//면적계산 메서드
	public double area(double radius) {
		double arearesult=0;
		arearesult=(radius*radius*PIE)*0.25;
		return arearesult;
	}
	// 부체꼴의 둘레 계산 메서드 
	public double circum(double radius) {
		double circumresult=0;
		circumresult=(radius*2*PIE)*0.25+2*radius;
		return circumresult;
	}
	
}

