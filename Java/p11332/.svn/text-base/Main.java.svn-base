package p11332;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = in.nextInt()) != 0) {
			out.append(func(n) + "\n");
		}		
		System.out.print(out);
	}

	static int func(int n) {
		int total = 0;
		int num = n;
		while (num > 0) {
			total += num % 10;
			num /= 10;
		}
		return (total < 10) ? total : func(total);
	}
}
