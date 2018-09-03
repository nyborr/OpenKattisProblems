import java.text.DecimalFormat;
import java.util.Scanner;

public class AboveAverage {
	public static void main(String args[]) {
		Scanner keyboard = new Scanner(System.in);
		int C = keyboard.nextInt();
		keyboard.nextLine();
		String[] classes = new String[C];
		for (int i = 0; i < C; i++) {
				classes[i] = keyboard.nextLine();
		}
		
		double[] avgs = new double[C];
		double sum = 0;
		DecimalFormat df = new DecimalFormat("#.000");
		
		for(int i = 0; i < C; i++) {
			String[] str = classes[i].split(" ");
			for (int j = 1; j < Integer.valueOf(str[0]) + 1; j++) {
				sum += Double.valueOf(str[j]);
			}
			avgs[i] = sum / Double.valueOf(str[0]);
			//System.out.println(avgs[i]); 
			sum = 0;
		}
		
		
		int[] aboveAvg = new int[C];
		for(int i = 0; i < C; i++) {
			String[] str = classes[i].split(" ");
			for (int j = 1; j < Integer.valueOf(str[0]) + 1; j++) {
				if(Double.valueOf(str[j]) > avgs[i])
				{
					aboveAvg[i]++;
				}
				//System.out.println(Double.valueOf(str[j]));
				//System.out.println(avgs[i]);
			}
		}
		
		for(int i = 0; i < C; i++) {
			//System.out.println(aboveAvg[i]);
			String[] str = classes[i].split(" ");
			System.out.println(df.format((aboveAvg[i]/Double.valueOf(str[0])*100))+"%");
		}
		
	}
}
