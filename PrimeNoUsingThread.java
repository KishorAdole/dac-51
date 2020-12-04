package assignments;

import java.util.*;

class MyRunnable implements Runnable{
	
	int num = 0;

	MyRunnable(int num) {
		
		this.num = num;
	}
	
	@Override
	public void run() {
		
		//System.out.println("Inside the thread block.");
		//System.out.println(num);
		
		boolean flag = false;
		
		if(num==0 && num==1)
			System.out.println("The given number is a prime number.");
	
		else {
			
			for(int i=2; i<=num/2; i++) {
				
				if(num%i==0) {
					
					flag = true;
					break;
				}
					
			}
			
			if(flag==false)
				System.out.println("The given number is prime number.");
			else
				System.out.println("The given number is not a prime number.");
		}
	}
}

public class PrimeNoUsingThread {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Eneter the number to check wether the prime or not.");
		int num = sc.nextInt();
		
		MyRunnable mth = new MyRunnable(num);
		Thread th = new Thread(mth);
		th.start();
	}

}
