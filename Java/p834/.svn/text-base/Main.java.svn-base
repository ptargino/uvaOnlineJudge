package p834;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		while (in.hasNextInt())
			out.append(formatar(fractions(in.nextInt(), in.nextInt()))+"\n");
		System.out.print(out);
	}

	private static String fractions(int a, int b) {
		return (b == 1) ? "" + a : (int) a / b + " " + fractions(b, a % b);
	}

	public static String formatar(String str) {
		String[] token = str.split(" ");
		if (token.length == 1)
			return "[" + token[0] + "]";
		StringBuilder out = new StringBuilder();
		out.append("[" + token[0] + ";" + token[1]);
		for (int i = 2; i < token.length; i++)
			out.append("," + token[i]);
		out.append("]");
		return out.toString();
	}
}
