package 겨울방학과제;

import java.util.Scanner;

public class AccountEx extends Account{

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan=new Scanner(System.in);
		String bankaccountnumber;
		int depositedmoney;
		int withdrawmoney;
		
		System.out.println("----------------------------------------------------------------------");
		Account a1=new Account();
		
		System.out.print("계좌번호 입력 : ");
		bankaccountnumber= scan.next();
		a1.setBankaccountnumber(bankaccountnumber);
		System.out.println(a1.toString());
		
		System.out.println("");
		System.out.print("입금할 금액 : ");
		depositedmoney=scan.nextInt();
		a1.deposit(depositedmoney);
		System.out.println(a1.toString());
		
		System.out.println("");
		System.out.print("출금할 금액 : ");
		withdrawmoney=scan.nextInt();
		a1.withdraw(withdrawmoney);
		System.out.println(a1.toString());
		
		System.out.println("----------------------------------------------------------------------");
		Account a2=new Account();
		
		System.out.print("계좌번호 입력 : ");
		bankaccountnumber= scan.next();
		a2.setBankaccountnumber(bankaccountnumber);
		System.out.println(a2.toString());
		
		System.out.println("");
		System.out.print("입금할 금액 : ");
	    depositedmoney=scan.nextInt();
		a2.deposit(depositedmoney);
		System.out.println(a2.toString());
		
		System.out.println("");
		System.out.print("출금할 금액 : ");
		withdrawmoney=scan.nextInt();
		a2.withdraw(withdrawmoney);
		System.out.println(a2.toString());
		
		System.out.println("----------------------------------------------------------------------");
		Account a3=new Account();
		
		System.out.print("계좌번호 입력 : ");
		bankaccountnumber= scan.next();
		a3.setBankaccountnumber(bankaccountnumber);
		System.out.println(a3.toString());
		
		System.out.println("");
		System.out.print("입금할 금액 : ");
	    depositedmoney=scan.nextInt();
		a3.deposit(depositedmoney);
		System.out.println(a3.toString());
		
		System.out.println("");
		System.out.print("출금할 금액 : ");
		withdrawmoney=scan.nextInt();
		a3.withdraw(withdrawmoney);
		System.out.println(a3.toString());
		System.out.println("----------------------------------------------------------------------");
		System.out.printf("\n"+"계좌번호"+"\t\t"+"잔액"+"\n");
		System.out.print("----------------------------------------------------------------------");
		System.out.printf("\n"+a1.bankaccountnumber+"\t\t"+a1.currentbalance);
		System.out.printf("\n"+a2.bankaccountnumber+"\t\t"+a2.currentbalance);
		System.out.printf("\n"+a3.bankaccountnumber+"\t\t"+a3.currentbalance);

	}

}
