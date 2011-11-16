package p11344;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int a = new Integer(in.readLine());
		boolean wonderful;
		for (int j = 0; j < a; j++) {
			BigInteger m = new BigInteger(in.readLine());
			wonderful = true;
			String[] num = in.readLine().split(" ");
			int n = new Integer(num[0]);
			for (int i = 1; i <= n; i++)
				if (!m.mod(new BigInteger(num[i])).equals(BigInteger.ZERO)) {
					wonderful = false;
					break;
				}
			out.append(m + " - " + (wonderful ? "Wonderful.\n" : "Simple.\n"));
		}
		System.out.print(out);
	}
}
