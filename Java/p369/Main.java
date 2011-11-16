package p369;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n = in.nextInt();
		int m = in.nextInt();
		while (n != 0 && m != 0) {
			BigInteger c = BigInteger.ONE;
			int min = Math.min(m, n - m);
			int numerador = Math.max(m, n - m);
			int num = n;
			while (num > numerador) {
				c = c.multiply(new BigInteger("" + num));
				num--;
			}
			while (min > 0) {
				c = c.divide(new BigInteger("" + min));
				min--;
			}
			out.append(n + " things taken " + m + " at a time is " + c + " exactly.\n");
			n = in.nextInt();
			m = in.nextInt();
		}
		System.out.print(out);
	}
}
