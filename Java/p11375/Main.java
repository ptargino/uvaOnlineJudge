package p11375;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		final int size = 2001;
		int i, j, c;
		int[] coin = new int[] { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
		BigInteger[] numWays = new BigInteger[size];
		for (j = 0; j < size; j++)
			numWays[j] = BigInteger.ZERO;
		for (i = 0; i < 10; i++)
			numWays[coin[i]] = numWays[coin[i]].add(BigInteger.ONE);
		for (i = 0; i < 10; i++) {
			c = coin[i];
			for (j = c; j < size; j++)
				numWays[j] = numWays[j].add(numWays[j - c]);
		}
		for (j = 1; j < size; j++)
			numWays[j] = numWays[j].add(numWays[j - 1]);
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		while (in.hasNextInt())
			out.append(numWays[in.nextInt()] + "\n");
		System.out.print(out);

	}
}
