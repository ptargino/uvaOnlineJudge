package p713;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		BigInteger num0, num1, ans;
		String[] num;
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			num = in.readLine().split(" ");
			num0 = new BigInteger(new StringBuilder(num[0]).reverse().toString());
			num1 = new BigInteger(new StringBuilder(num[1]).reverse().toString());
			ans = new BigInteger(new StringBuilder(num0.add(num1).toString()).reverse().toString());
			out.append(ans.toString() + "\n");
		}
		System.out.print(out);
	}
}
