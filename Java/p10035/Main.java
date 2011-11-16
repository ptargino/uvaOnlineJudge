package p10035;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws Exception {
		boolean[] carry;
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		long a = in.nextLong();
		long b = in.nextLong();
		while (!(a == 0 && b == 0)) {
			carry = new boolean[12];
			int i = 1;
			int count = 0;
			while (a != 0 || b != 0) {
				int digitA = (int) (a % 10);
				int digitB = (int) (b % 10);
				if ((digitA + digitB + (carry[i - 1] ? 1 : 0)) >= 10) {
					carry[i] = true;
					count++;
				}
				a /= 10;
				b /= 10;
				i++;
			}
			out.append((count == 0 ? "No" : count) + (count > 1 ? " carry operations." : " carry operation.") + "\n");
			a = in.nextLong();
			b = in.nextLong();
		}
		System.out.print(out);
	}

}
