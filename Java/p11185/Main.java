package p11185;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws Throwable {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		long n;
		while ((n = in.nextLong()) >= 0)
			out.append(Long.toString(n, 3) + "\n");
		System.out.print(out);
	}
}
