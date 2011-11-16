package p11554;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		long[] ans = new long[1000001];
		long n;
		for (int i = 4; i < ans.length; i++) {
			n = i;
			ans[i] = ans[i - 1] + (((n - 3) + (n % 2 + 1)) * ((n - 2) / 2)) / 2;
		}
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int t = in.nextInt();
		for (int i = 0; i < t; i++) {
			out.append(ans[in.nextInt()] + "\n");
		}
		System.out.print(out);
	}
}
