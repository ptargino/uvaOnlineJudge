package p10190;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {

		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		while (in.hasNextInt()) {
			int n = in.nextInt();
			int m = in.nextInt();
			boolean boring = (m == 1 || m == 0 || n == 0 || n == 1);
			int temp = n;
			while (temp != 1 && !boring) {
				if (temp % m != 0) {
					boring = true;
					break;
				}
				temp /= m;
			}
			if (boring)
				out.append("Boring!\n");
			else {
				out.append(n);
				while (n != 1) {
					n /= m;
					out.append(" " + n);
				}
				out.append("\n");
			}
		}
		System.out.print(out);
	}
}
