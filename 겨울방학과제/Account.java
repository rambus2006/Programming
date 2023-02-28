package 겨울방학과제;
/*
 * 6.계좌를 위한 클래스를 정의하고, 계좌번호와 입금액과 출금액 입력받아 예시와 같이 잔액을 출력하는
 * 프로그램을 작성하시오
 * 조건
 * 1.클래스 내에 다음 메서드를 작성하여 처리한다. 
 *   입금 메서드 : void deposit([매개변수])
 *   출금 메서드 : void withdraw([매개변수])
 *   출력 메서드(입출금 후 계좌번호***의 현재 잔액 : &&&& 메시지 출력하는 메서드 이용)
 */
import java.util.Scanner;
public class Account {
	//클래스 변수 선언
	String bankaccountnumber;	//계좌번호
	int currentbalance;//현재 잔액
	int depositedmoney;	//입금할 금액
	int withdrawnmoney;   //출금할 금액
	
	//생성자 선언
	public Account() {}
	public Account(String bankaccountnumber,int currentbalance) {
		this.bankaccountnumber=bankaccountnumber;
		this.currentbalance=currentbalance;
	}
	//getter,setter선언
	public String getBankaccountnumber() {
		return bankaccountnumber;
	}
	public void setBankaccountnumber(String bankaccountnumber) {
		this.bankaccountnumber = bankaccountnumber;
	}
	public int getCurrentbalance() {
		return currentbalance;
	}
	public void setCurrentbalance(int currentbalance) {
		this.currentbalance = currentbalance;
	}
	//입금메서드 선언
	public void deposit(int depositedmoney) {
			Scanner scan=new Scanner(System.in);
			currentbalance+=depositedmoney;
			
	}
	//출금메서드선언
	public void withdraw(int withdrawnmoney) {
		Scanner scan=new Scanner(System.in);
		System.out.println("출금할 금액 : ");
		if(currentbalance<withdrawnmoney) {
			System.out.println("출금하려는 계좌의 잔액이 부족하여 출금이 불가능합니다.");
		}else {
			currentbalance-=withdrawnmoney;
		}
	}
	@Override
	public String toString() {
		return "계좌번호 "+bankaccountnumber+"의 현재 잔액 : "+currentbalance;
	}
	

}
