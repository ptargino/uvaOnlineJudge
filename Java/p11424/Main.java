package p11424;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		while ((n = in.nextInt()) != 0) {
			long g = 0;
			for (int i = 1; i < n; i++){
				for (int j = i + 1; j <= n; j++) {
					g += gcd(i, j);
				}
			}
			System.out.println(g);
		}
	}

	private static int gcd(int i, int j) {
		return (j == 0) ? i : gcd(j, i % j);
	}
}
