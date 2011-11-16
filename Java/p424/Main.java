package p424;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line;
		BigInteger out = BigInteger.ZERO;
		while (!(line = in.readLine()).equals("0")) {
			out = out.add(new BigInteger(line));
		}
		System.out.println(out);

	}
}
