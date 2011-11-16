package p10252;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class PRoblem10252 {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String str;
		while ((str = in.readLine()) != null) {
			char[] wordA = str.toCharArray();
			char[] wordB = in.readLine().toCharArray();
			Arrays.sort(wordA);
			Arrays.sort(wordB);

			int j = 0;
			externo: for (int i = 0; i < wordA.length; i++) {
				char letter = wordA[i];
				while (j < wordB.length) {
					if (wordA[i] < wordB[j]) {
						continue externo;
					} else if (letter == wordB[j]) {
						out.append(letter);
						j++;
						continue externo;
					}
					j++;
				}
				break externo;
			}
			out.append('\n');

		}
		System.out.print(out);
	}
}
