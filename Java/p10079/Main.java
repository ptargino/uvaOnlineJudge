package p10079;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = in.nextInt()) >= 0)
			out.append(new BigInteger("" + (1 + n)).multiply(new BigInteger("" + n)).divide(new BigInteger("2")).add(BigInteger.ONE)+"\n");
		System.out.print(out);
	}
}
