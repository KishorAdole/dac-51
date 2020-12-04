package assignments;

import java.util.*;

class ThreadDemo implements Runnable{
	
	int timer = 0;
	
	ThreadDemo(int num) {
		
		this.timer = num;
	}
	
	public void run() {
		
		for(int i=0; i<timer; i++) {
					
			try {
				
					Thread.sleep(1000);
				
			}catch(InterruptedException exp) {
				
				
			}
		System.out.print(" *");
		
		}
	}
}

public class StarPatternThreadClass {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number for printing the ( * ) pattern that much times.");
		int inp = sc.nextInt();
		
		ThreadDemo th = new ThreadDemo(inp);
		new Thread(th).start();
	}

}
