import java.util.Scanner;

public class HelloWorld {

	public static void main(String[] args) {
		int n;
		boolean prime;
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Enter a number n: ");
		n = keyboard.nextInt();
		
		for (int i = 2; i < n; i++) {
			prime = true;
			for(int j = 2; j < i; j++) {
				if(i%j==0)
				{
					prime = false;
				}
			}
			
			if (prime == true)
			{
				System.out.println(i);
			}
		}
		
	}

}