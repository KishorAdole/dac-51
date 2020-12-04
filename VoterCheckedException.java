package assignments;

import java.util.*;

class Voter{
	
	private int voterId;
	private String name;
	private int age;
	
	@Constructor
	Voter(int voterId, String name, int age) {
		
		this.voterId = voterId;
		this.name = name;
		this.age = age;
	}
}

class InvalidAgeException extends Exception{
	
	InvalidAgeException(String str) {
	
		super(str);
	}
}

public class VoterCheckedException {

	public static void main(String[] args) throws InvalidAgeException {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the voterId of person for voting.");
		int voterId = sc.nextInt();
		
		sc.nextLine();
		System.out.println("Enter the name of person for voting.");
		String name = sc.nextLine();
		
		System.out.println("Enter the age of person for voting.");
		int age = sc.nextInt();
		
		Voter obj1;
		if(age<18)
			throw new InvalidAgeException("Invalid age for voter.");
		else {
			
			obj1 = new Voter(voterId, name, age);
			System.out.println("Your data is taken as a voter.");
		}
			
	}

}
