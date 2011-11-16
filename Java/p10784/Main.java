package p10784;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		long n;
		int count = 1;
		while ((n = in.nextLong()) != 0) {
			n *= 2;
			long numSides = (long) Math.sqrt(n);
			while (numSides * (numSides - 3) < n)
				numSides++;
			out.append("Case " + count++ + ": " + numSides + "\n");
		}
		System.out.print(out);
	}
}
