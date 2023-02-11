package 교과서예제.객체생성;
/*77p
 * 앞에서 생성된 car클래스를 상속하여 3톤의 무게를 실을 수 있는 검정색 프론티어 트럭을 만들고자 한다. Truckmain 클래스를 실행하면
 * 실행 결과와 같이 출력되게 만들어보자
 * */
public class Truckmain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Truck mytruck=new Truck();
		mytruck.carname="프론티어";
		mytruck.ton=3;
		System.out.println("나의 트럭은"+mytruck.color+"이다.");
		System.out.println(mytruck.carname+"는 "+mytruck.ton+"톤을 실을 수 있다. ");
	}

}
class Car{
	String carname;
	String color="검정색";
	int velocity;
	void speedUp() {
		velocity+=5;
	}
	void speedDown() {
		velocity-=5;
	}
}
class Truck extends Car{
	String carname="프론티어";
	int ton=3;
	String color="검정색";
}