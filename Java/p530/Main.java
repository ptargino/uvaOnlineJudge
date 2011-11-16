package p530;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		long n = in.nextLong();
		long m = in.nextLong();
		while (n != 0 || m != 0) {
			BigInteger c = BigInteger.ONE;
			long min = Math.min(m, n - m);
			long numerador = Math.max(m, n - m);
			long num = n;
			while (num > numerador) {
				c = c.multiply(new BigInteger("" + num));
				num--;
			}
			while (min > 0) {
				c = c.divide(new BigInteger("" + min));
				min--;
			}
			out.append(c+"\n");
			n = in.nextInt();
			m = in.nextInt();
		}
		System.out.print(out);
	}
}
