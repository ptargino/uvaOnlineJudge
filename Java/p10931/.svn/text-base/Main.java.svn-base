package p10931;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = in.nextInt()) != 0) {
			String binary = Integer.toBinaryString(n);
			int count = 0;
			for (char digit : binary.toCharArray()) {
				if (digit == '1')
					count++;
			}
			out.append("The parity of " + binary + " is " + count + " (mod 2).\n");
		}
		System.out.print(out);
	}
}
