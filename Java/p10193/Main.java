package p10193;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 1; i <= n; i++) {
			int a = toDecimal(in.readLine());
			int b = toDecimal(in.readLine());
			out.append("Pair #" + i + ": " + (gcd(a, b) > 1 ? "All you need is love!\n" : "Love is not all you need!\n"));
		}
		System.out.print(out);
	}

	private static int gcd(int a, int b) {
		return (b == 0) ? a : gcd(b, a % b);
	}

	private static int toDecimal(String line) {
		char[] digits = line.toCharArray();
		int value = 0;
		for (char digit : digits) {
			value <<= 1;
			if (digit == '1')
				value++;
		}
		return value;
	}
}
