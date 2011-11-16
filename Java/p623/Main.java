package p623;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		BigInteger[] fact = new BigInteger[1001];
		fact[0] = BigInteger.ONE;
		for (int i = 1; i <= 1000; i++)
			fact[i] = fact[i - 1].multiply(new BigInteger("" + i));
		String line;
		while ((line = in.readLine()) != null)
			out.append(line + "!\n" + fact[Integer.parseInt(line)] + "\n");
		System.out.print(out);
	}
}
