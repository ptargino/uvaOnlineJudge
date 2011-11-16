package p10018;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long n = in.nextLong();
		StringBuilder out = new StringBuilder();
		for (long i = 0; i < n; i++) {
			long number = in.nextLong();
			long reverse = reverse(number);
			int j = 0;
			while (number != reverse) {
				number += reverse;
				reverse = reverse(number);
				j++;
			}
			out.append(j + " " + number + "\n");
		}
		System.out.print(out);
	}

	public static long reverse(long number) {
		long reverse = 0;
		while (number != 0) {
			reverse = 10 * reverse + (number % 10);
			number /= 10;
		}
		return reverse;
	}
}
