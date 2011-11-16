package p10929;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		BigInteger eleven = new BigInteger("11");
		String line;
		while (!(line = in.readLine()).equals("0"))
			if (new BigInteger(line).mod(eleven).equals(BigInteger.ZERO))
				out.append(line + " is a multiple of 11.\n");
			else
				out.append(line + " is not a multiple of 11.\n");
		System.out.print(out);
	}
}
