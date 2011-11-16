package p1148;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			String[] num = in.readLine().split(" ");
			out.append(new BigInteger(num[0]).subtract(new BigInteger(num[1])) + "\n");
		}
		System.out.print(out);
	}
}
