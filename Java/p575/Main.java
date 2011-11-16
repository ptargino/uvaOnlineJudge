package p575;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while (!(line = in.readLine()).equals("0"))
			out.append(convert(line) + "\n");
		System.out.print(out);
	}

	private static int convert(String line) {
		char[] digits = line.toCharArray();
		int result = 0;
		int size = digits.length;
		for (int i = 0; i < size; i++)
			if (digits[i] != '0')
				result += (digits[i] - '0') * (pow(size - i) - 1);
		return result;
	}

	public static int pow(int a) {
		return (a == 0) ? 1 : 2 * pow(a - 1);
	}
}
