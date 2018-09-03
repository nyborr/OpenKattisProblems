import java.util.Scanner;

public class DeathKnightHero {
	public static void main(String args[]) {
		Scanner keyboard = new Scanner(System.in);
		int n = keyboard.nextInt();
		keyboard.nextLine();

		String[] battles = new String[n];
		int wins = 0;
		for(int i = 0; i < n; i++) {
			battles[i] = keyboard.nextLine();
		}
		
		
		for(int i = 0; i < n; i++) {
			if(!battles[i].contains("CD")) {
				wins += 1;
			}
		}
		System.out.println(wins);
	}
}
