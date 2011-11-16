package p495;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws Throwable {
		BigInteger[] fib = new BigInteger[5001];
		fib[0] = BigInteger.ZERO;
		fib[1] = BigInteger.ONE;
		for (int i = 2; i <= 5000; i++)
			fib[i] = fib[i - 1].add(fib[i - 2]);
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			int n = Integer.parseInt(line);
			out.append("The Fibonacci number for " + n + " is " + fib[n] +	"\n");
		}
		System.out.print(out);

	}
}