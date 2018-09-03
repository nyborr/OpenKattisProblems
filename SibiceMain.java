import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class SibiceMain {
	
	public static void main(String args[]) {
		Scanner keyboard = new Scanner(System.in);
		//List<Integer> set = new ArrayList<>();
		
		/*while(keyboard.hasNext()) {
			if(keyboard.hasNextInt())
				set.add(keyboard.nextInt());
			else
				keyboard.next();
		}*/
		
		int[] nums = new int[3];
		for(int i = 0; i < 3; i++) {
			nums[i] = keyboard.nextInt();
		}
		
		List<Integer> matches = new ArrayList<>();
		for (int i = 0; i < nums[0]; i++)
		{
			matches.add(keyboard.nextInt());
		}
		
		double size = nums[1] * nums[1] + nums[2] * nums[2];
		double sqSize = Math.sqrt(size);
		
		for (int i = 0; i < nums[0]; i++) {
			if(matches.get(i) <= sqSize) {
				System.out.println("DA");
			}
			else {
				System.out.println("NE");
			}
		}

		
		keyboard.close();
	}

}
