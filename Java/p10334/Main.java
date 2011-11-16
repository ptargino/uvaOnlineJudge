package p10334;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Throwable {
		BigInteger[] a = new BigInteger[1001];
		a[0] = new BigInteger("1");
		a[1] = new BigInteger("2");
		for (int i = 2; i <= 1000; i++)
			a[i] = a[i - 1].add(a[i - 2]);
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null)
			out.append(a[Integer.parseInt(line)] + "\n");
		System.out.print(out);
	}
}
