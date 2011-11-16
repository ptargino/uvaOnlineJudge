package p11417;

import java.util.Scanner;

public class Main {

	public static int GCD(int a, int b) {
		return (b == 0) ? a : GCD(b, a % b);
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		while ((n = in.nextInt()) != 0) {
			int g = 0;
			for (int i = 1; i < n; i++)
				for (int j = i + 1; j <= n; j++)
					g += GCD(i, j);
			System.out.println(g);
		}
	}
}
