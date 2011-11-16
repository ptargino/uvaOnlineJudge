package p11466;

import java.util.Scanner;

public class Main {

	static boolean isPrime(long n) {
		if (n == 2)
			return true;
		if (n % 2 == 0)
			return false;
		int root = (int) Math.sqrt(n);
		for (int i = 3; i < root; i += 2)
			if (n % i == 0)
				return false;
		return true;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		long n;
		while ((n = in.nextLong()) != 0) {
			if (isPrime(n)) {
				out.append("-1\n");
			} else {
				long root = (long) Math.sqrt(n);
				while (!(n % root == 0 && isPrime(root)))
					root--;
				if (n / root > root && isPrime(n / root))
					root = n / root;
				out.append(root + "\n");
			}
		}
		System.out.print(out);
	}
}
