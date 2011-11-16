package p499;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			char[] letters = line.toCharArray();
			int[] quantUpper = new int[26];
			int[] quantLower = new int[26];
			int max = 0;
			for (char letter : letters)
				if (letter >= 'a' && letter <= 'z')
					quantLower[letter - 'a']++;
				else if (letter >= 'A' && letter <= 'Z')
					quantUpper[letter - 'A']++;
			for (int quant : quantLower)
				if (quant > max)
					max = quant;
			for (int quant : quantUpper)
				if (quant > max)
					max = quant;
			for (int i = 0; i < quantUpper.length; i++)
				if (quantUpper[i] == max)
					out.append((char) ('A' + i));
			for (int i = 0; i < quantLower.length; i++)
				if (quantLower[i] == max)
					out.append((char) ('a' + i));
			out.append(" " + max + "\n");
		}
		System.out.print(out);
	}
}
