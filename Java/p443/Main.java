package p443;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
	static long[] humble = new long[5842];
	static int index = 0;
	static long max = 2000000000, fact;

	static void initialize(long n) {
		humble[index++] = n;
		fact = 7 * n;
		if (fact <= max)
			initialize(fact);
		if (n % 7 == 0)
			return;
		fact = 5 * n;
		if (fact <= max)
			initialize(fact);
		if (n % 5 == 0)
			return;
		fact = 3 * n;
		if (fact <= max)
			initialize(fact);
		if (n % 3 == 0)
			return;
		fact = 2 * n;
		if (fact <= max)
			initialize(fact);
	}

	private static void initialize() {
		initialize(1);
		Arrays.sort(humble);
	}

	public static void main(String[] args) {
		initialize();
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = in.nextInt()) != 0) {
			String cardinality = "th";
			if ((n % 100) < 10 || (n % 100) > 20)
				if (n % 10 == 1)
					cardinality = "st";
				else if (n % 10 == 2)
					cardinality = "nd";
				else if (n % 10 == 3)
					cardinality = "rd";
			out.append("The " + n + cardinality + " humble number is " + humble[n - 1] + ".\n");
		}
		System.out.print(out);
	}

}
