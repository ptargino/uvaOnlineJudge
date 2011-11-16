package p748;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigDecimal;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			StringTokenizer token = new StringTokenizer(line, " ");
			double a = Double.parseDouble(token.nextToken());
			int b = Integer.parseInt(token.nextToken());
			BigDecimal ans = new BigDecimal(a).pow(b);
			String num = ans.toPlainString();
			if (num.charAt(0) == '0')
				out.append(num.substring(1)+"\n");
			else
				out.append(num + "\n");
		}
		System.out.print(out);
	}
}
