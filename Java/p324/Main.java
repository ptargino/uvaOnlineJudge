package p324;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int[][] digits = new int[367][10];
		digits[0][1]++;
		BigInteger fact = BigInteger.ONE;
		for (int i = 1; i < 367; i++) {
			fact = fact.multiply(new BigInteger(i + ""));
			for (char digit : fact.toString().toCharArray())
				digits[i][digit - '0']++;
		}

		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = in.nextInt()) != 0) {
			out.append(n + "! --\n" + "   (0)    " + digits[n][0] + "    (1)    " + digits[n][1] + "    (2)    " + digits[n][2] + "    (3)    " + digits[n][3] + "    (4)    " + digits[n][4] + "\n"
					+ "   (5)    " + digits[n][5] + "    (6)    " + digits[n][6] + "    (7)    " + digits[n][7] + "    (8)    " + digits[n][8] + "    (9)    " + digits[n][9] + "\n");

		}
		System.out.print(out);

	}

}
