package p10394;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int qtd = 20000000;
		boolean[] primes = new boolean[qtd];
		int[] twin = new int[100001];
		int i, j;
		for (i = 0; i < qtd; i++)
			primes[i] = false;
		primes[2] = true;
		primes[3] = true;
		int count = 1;
		for (i = 5; i < qtd; i += 2) {
			for (j = 3; j * j <= i; j += 2)
				if (i % j == 0)
					break;
			if (i % j != 0) {
				primes[i] = true;
				if (primes[i - 2]) {
					twin[count] = i - 2;
					count++;
				}
			}
		}

		int n;
		while ((n = in.nextInt()) != 0) {
			System.out.println("(" + twin[n] + "," + (twin[n] + 2) + ")");
		}

	}
}
