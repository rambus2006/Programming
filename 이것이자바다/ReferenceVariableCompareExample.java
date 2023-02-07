package 이것이자바다;

public class ReferenceVariableCompareExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[]arr1;	//배열 변수 arr1 선언
		int[]arr2;	//배열 변수 arr2 선언
		int[]arr3;	//배열 변수 arr3 선언
		
		arr1=new int[] {1,2,3};	//배열 {1,2,3}을 생성하고 arr1변수에 대입
		arr2=new int[] {1,2,3};	//배열 {1,2,3}을 생성하고 arr2변수에 대입
		arr3=arr2;
		
		System.out.println(arr1==arr2); 	//arr1과 arr2변수가 같은 배열을 참조하는지 검사
		System.out.println(arr2==arr3);     //arr2와 arr3변수가 같은 배열을 참조하는지 검사
	}

}
