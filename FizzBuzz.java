import java.util.Scanner;

public class FizzBuzz {
	public static void main(String args[]) {
		Scanner keyboard = new Scanner(System.in);
		int[] nums = new int[3];
		for(int i = 0; i < 3; i++) {
			nums[i] = keyboard.nextInt();
		}
		
		for(int i = 0; i < nums[2]; i++) {
			if((i+1) % nums[0] == 0 && (i+1) % nums[1] == 0) {
				System.out.println("FizzBuzz");
			}
			else if ((i+1) % nums[0] == 0) {
				System.out.println("Fizz");
			}
			else if ((i+1) % nums[1] == 0) {
				System.out.println("Buzz");
			}
			else {
				System.out.println(i + 1);
			}
		}
		
		keyboard.close();
		
	}
}
