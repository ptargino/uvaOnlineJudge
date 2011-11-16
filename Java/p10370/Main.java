package p10370;

import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		DecimalFormat format = new DecimalFormat("0.000");	
		int n = in.nextInt();
		for (int i = 0; i < n; i++) {
			double average = 0;
			int count = 0;
			int size = in.nextInt();
			int[] grades = new int[size];
			for (int j = 0; j < size; j++)
				grades[j] = in.nextInt();
			for (int grade : grades)
				average += grade;
			average /= size;
			for (int grade : grades)
				if (grade > average)
					count++;
			out.append(format.format((double) count / size * 100) + "%\n");
		}
		System.out.print(out);
	}
}
