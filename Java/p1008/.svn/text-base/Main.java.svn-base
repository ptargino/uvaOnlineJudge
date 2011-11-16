package p1008;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		int[] quant = new int[26];
		for (int i = 0; i < n; i++) {
			char[] line = in.readLine().toUpperCase().toCharArray();
			for (char letter : line)
				if (letter >= 'A' && letter <= 'Z')
					quant[letter - 'A']++;
		}

		for (int i = 0; i < quant.length; i++) {
			int max = 0;
			int indexMax = -1;
			for (int j = 0; j < quant.length; j++) {
				if (quant[j] > max) {
					max = quant[j];
					indexMax = j;
				}
			}
			if (max == 0) {
				break;
			} else {
				out.append((char)('A'+indexMax)+" "+quant[indexMax]+"\n");
				quant[indexMax] = 0;
			}
		}
		System.out.print(out);
	}

}
