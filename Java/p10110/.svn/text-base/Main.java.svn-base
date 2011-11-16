package p10110;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long n;
		while ((n = in.nextLong()) != 0)
			System.out.print((hasIntegerSqrt(n) ? "yes" : "no") + "\n");
	}

	private static boolean hasIntegerSqrt(long n) {
		double sqrt = Math.sqrt(n);
		return ((double)sqrt == (long) sqrt);
	}

}
