package p10019;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			String line = in.readLine();
			out.append(decBin(line) + " " + decHex(line) + "\n");
		}
		System.out.print(out);
	}

	public static int decBin(String line) {
		int decimal = Integer.parseInt(line);
		int count = 0;
		while (decimal != 0) {
			if (decimal % 2 == 1)
				count++;
			decimal >>= 1;
		}
		return count;
	}

	public static int decHex(String line) {
		int count = 0;
		for (char digit : line.toCharArray())
			count += decBin(digit + "");
		return count;
	}
}
