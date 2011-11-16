package p10579;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	static ArrayList<BigInteger> ans = new ArrayList<BigInteger>();

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		BigInteger[] ans = new BigInteger[8200];
		ans[0] = new BigInteger("0");
		ans[1] = BigInteger.ONE;
		ans[2] = BigInteger.ONE;
		for (int i = 3; i < 8200; i++)
			ans[i] = ans[i - 1].add(ans[i - 2]);
		while (in.hasNextInt()) {
			int n = in.nextInt();
			out.append(ans[n] + "\n");
		}
		System.out.print(out);
	}
}
