package p10700;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			String line = in.readLine();
			out.append("The maximum and minimum are " + maximum(line) + " and " + minimum(line) + ".\n");
		}
		System.out.print(out);
	}

	public static long minimum(String factors) {
		StringTokenizer token = new StringTokenizer(factors, "+");
		long result = 0;
		while (token.hasMoreTokens()) {
			StringTokenizer token2 = new StringTokenizer(token.nextToken(), "*");
			long subResult = 1;
			while (token2.hasMoreTokens())
				subResult *= Integer.parseInt(token2.nextToken());
			result += subResult;
		}
		return result;
	}

	public static long maximum(String factors) {
		long result = 1;
		StringTokenizer token = new StringTokenizer(factors, "*");
		while (token.hasMoreTokens()) {
			StringTokenizer token2 = new StringTokenizer(token.nextToken(), "+");
			long subResult = 0;
			while (token2.hasMoreTokens())
				subResult += Integer.parseInt(token2.nextToken());
			result *= subResult;
		}
		return result;
	}
}
