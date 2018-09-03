import java.util.Scanner;
import java.util.regex.*;

public class HissingMicrophone {
	public static void main(String args[]) {
		
		Scanner keyboard = new Scanner(System.in);
		
		String input = keyboard.nextLine();
		
		if(input.contains("ss"))
		{
			System.out.println("hiss");
			
		}
		else {
			System.out.println("no hiss");
		}
		
		keyboard.close();
	}
}
