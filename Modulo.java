import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Modulo {
	public static void main(String args[]) {
		Scanner keyboard = new Scanner(System.in);
		int[] nums = new int[10];
		for (int i = 0; i < 10; i++) {
			nums[i] = keyboard.nextInt();
		}
		
		int[] modulo = new int[10];
		for(int i = 0; i < 10; i++) {
			modulo[i] = nums[i] % 42;
		}
		
		int count = 0;
		
		Set<Integer> set = new HashSet<>();
		for(int i : modulo) {
			set.add(i);
		}
		
		System.out.println(set.size());
	}
}
