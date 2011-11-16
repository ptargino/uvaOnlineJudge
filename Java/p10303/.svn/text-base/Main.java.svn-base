package p10303;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws Exception{
		BigInteger[] catalan = new BigInteger[1001];
		catalan[0] = BigInteger.ONE;
		BigInteger two = new BigInteger("2");
		for (int i = 0; i < catalan.length - 1; i++) {
			BigInteger factor = new BigInteger("" + i);
			catalan[i + 1] = two.multiply(two.multiply(factor).add(BigInteger.ONE)).multiply(catalan[i]).divide(factor.add(two));
		}
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null)
			out.append(catalan[Integer.parseInt(line)] + "\n");
		System.out.print(out);
	}
}
