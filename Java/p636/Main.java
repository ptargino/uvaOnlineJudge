package p636;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static long parseLong(String s, int radix) {
		long result = 0;
		int i = 0, len = s.length();
		int digit;
		if (len > 0)
			while (i < len) {
				digit = Character.digit(s.charAt(i++), radix);
				result *= radix;
				result += digit;
			}
		return result;
	}

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while (!(line = in.readLine().trim()).equals("0")) {
			int base = 1;
			for (char digit : line.toCharArray())
				if (digit - '0' > base)
					base = digit - '0';
			ext: for (int i = base + 1; i < 100; i++) {
				long value = parseLong(line, i);
				if (value <= 1000000000)
					for (int j = 0; j * j < 1000000000; j++) {
						if (j * j == value) {
							out.append(i + "\n");
							break ext;
						}
					}
			}
		}
		System.out.print(out);
	}
}
