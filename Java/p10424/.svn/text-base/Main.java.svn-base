package p10424;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		DecimalFormat format = new DecimalFormat("0.00");
		String wordA = in.readLine(), wordB = in.readLine();

		while (wordA != null) {
			int valueA = 0, valueB = 0;
			for (char letter : wordA.toCharArray())
				if (letter >= 'a' && letter <= 'z')
					valueA += letter - 'a' + 1;
				else if (letter >= 'A' && letter <= 'Z')
					valueA += letter - 'A' + 1;
			valueA = sumdigits(valueA);

			for (char letter : wordB.toCharArray())
				if (letter >= 'a' && letter <= 'z')
					valueB += letter - 'a' + 1;
				else if (letter >= 'A' && letter <= 'Z')
					valueB += letter - 'A' + 1;
			valueB = sumdigits(valueB);
			out.append(format.format((valueA == valueB ? 1 : valueA > valueB ? (double) valueB / valueA : (double) valueA / valueB) * 100) + " %\n");
			wordA = in.readLine();
			wordB = in.readLine();
		}
		System.out.print(out);
	}

	private static int sumdigits(int value) {
		while (value >= 10) {
			int num = value;
			value = 0;
			while (num > 0) {
				value += num % 10;
				num /= 10;
			}
		}
		return value;
	}
}
