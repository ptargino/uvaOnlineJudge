package p492;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String str;
		while ((str = in.readLine()) != null) {
			StringBuilder word = new StringBuilder(str);
			int startIndex = -1, endIndex = -1;
			while (true) {
				startIndex = startWord(endIndex, word.toString());
				endIndex = endWord(startIndex, word.toString());
				if (startIndex >= word.length() || endIndex >= word.length())
					break;
				char initial = word.charAt(startIndex);
				if (!beginsWithVowel(initial)) {
					word.deleteCharAt(startIndex);
					word.insert(endIndex - 1, initial);
				}
				word.insert(endIndex, "ay");
			}
			out.append(word + "\n");
		}
		System.out.print(out);
	}

	private static int endWord(int startIndex, String str) {
		int index = startIndex + 1;
		char[] word = str.toCharArray();
		for (int i = index; i < word.length; i++) {
			char letter = word[i];
			if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
				index++;
			else
				break;
		}
		return index;
	}

	private static int startWord(int startIndex, String str) {
		int index = startIndex + 1;
		char[] word = str.toCharArray();
		for (int i = index; i < word.length; i++) {
			char letter = word[i];
			if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
				break;
			else
				index++;
		}
		return index;
	}

	private static boolean beginsWithVowel(char ch) {
		return ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u';
	}
}
