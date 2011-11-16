package p11223;

import java.util.HashMap;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		String word;
		HashMap<String, String> map = new HashMap<String, String>();
		int l = in.nextInt();
		int n = in.nextInt();
		for (int i = 0; i < l; i++) {
			word = in.next();
			map.put(word, in.next());
		}
		for (int i = 0; i < n; i++) {
			word = in.next();
			if (map.containsKey(word))
				out.append(map.get(word) + "\n");
			else
				out.append(plural(word) + "\n");
		}
		System.out.print(out);
	}

	private static String plural(String word) {
		int len = word.length();
		if (len > 1 && word.charAt(len - 1) == 'y' && !isVowel(word.charAt(len - 2)))
			return word.substring(0, len - 1) + "ies";
		if (word.endsWith("o") || word.endsWith("s") || word.endsWith("ch") || word.endsWith("sh") || word.endsWith("x"))
			return word + "es";
		return word + "s";
	}

	private static boolean isVowel(char ch) {
		return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
	}
}
