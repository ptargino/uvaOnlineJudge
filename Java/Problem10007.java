

import java.math.BigInteger;
import java.util.Scanner;

public class Problem10007 {

	public static void main(String[] args) throws Exception {
		BigInteger[] catalan = new BigInteger[301];
		BigInteger[] factorial = new BigInteger[301];
		BigInteger[] result = new BigInteger[301];
		catalan[0] = BigInteger.ONE;
		BigInteger two = new BigInteger("2");
		for (int i = 0; i < catalan.length - 1; i++) {
			BigInteger factor = new BigInteger("" + i);
			catalan[i + 1] = two.multiply(two.multiply(factor).add(BigInteger.ONE)).multiply(catalan[i]).divide(factor.add(two));
		}
		factorial[0] = BigInteger.ONE;
		for (int i = 1; i < factorial.length; i++) {
			factorial[i] = factorial[i - 1].multiply(new BigInteger("" + i));
			result[i] = catalan[i].multiply(factorial[i]);
		}

		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = in.nextInt()) != 0)
			out.append(result[n] + "\n");
		System.out.print(out);
	}
}
