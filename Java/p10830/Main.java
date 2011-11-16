package p10830;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		long n;
		while ((n = in.nextLong()) != 0) {
			out.append(sod(n) + "\n");
		}
		System.out.print(out);
	}

	private static long sod(long n) {
		if (n <= 2)
			return 0;
		long root = (long) Math.sqrt(n);
		long sod = 0;
		for (long i = 2; i < root; i++)
			if (n % i == 0)
				sod += i + (n / i);
		if (root > 1 &&n % root == 0)
			sod += root;
		return sod + sod(n - 1);
	}
}
