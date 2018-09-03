import java.util.Scanner;

public class Filip {
	public static void main(String args[]) {
		Scanner keyboard = new Scanner(System.in);
		int[] nums = new int[2];
		for(int i = 0; i < 2; i++) {
			nums[i] = keyboard.nextInt();
		}
		
		String number1 = String.valueOf(nums[0]);
		char a = number1.toCharArray()[0];
		char b = number1.toCharArray()[1];
		char c = number1.toCharArray()[2];
		
		String num1 = "" + c + b + a;
		
		String number2 = String.valueOf(nums[1]);
		char d = number2.toCharArray()[0];
		char e = number2.toCharArray()[1];
		char f = number2.toCharArray()[2];
		
		String num2 = "" + f + e + d;
		
		if(Integer.valueOf(num1) > Integer.valueOf(num2)) {
			System.out.println(num1);
		}
		else {
			System.out.println(num2);
		}
		
		keyboard.close();
	}

}
