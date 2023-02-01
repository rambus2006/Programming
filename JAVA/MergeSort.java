package 겨울방학과제;
import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.IntStream;
public class MergeSort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int A[] =new int[5];
		System.out.print("첫번째 배열의 데이타 : ");
		for(int i=0;i<5;i++) {
			int a1=sc.nextInt();
			A[i]=a1;
		}
		
		int B[]=new int[5];
		System.out.print("두번째 배열의 데이타 : ");
		for(int i=0;i<5;i++) {
			int b1=sc.nextInt();
			B[i]=b1;
		}
		
		int []C=IntStream.concat(IntStream.of(A),IntStream.of(B)).toArray();
		
		Arrays.sort(C);
		System.out.println("병합된 배열의 데이타 : ");
		for(int j=0;j<10;j++) {
			System.out.print(C[j]+" ");
		}	
	}

}
