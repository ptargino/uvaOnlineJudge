package p11461;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int a = in.nextInt();
		int b = in.nextInt();
		while (a != 0 || b != 0) {
			int sqrtA = (int) Math.sqrt(a);
			int sqrtB = (int) Math.sqrt(b);
			int count = sqrtB - sqrtA + 1;
			if (sqrtA * sqrtA < a)
				count--;
			out.append(count + "\n");
			a = in.nextInt();
			b = in.nextInt();
		}
		System.out.print(out);
	}
}
