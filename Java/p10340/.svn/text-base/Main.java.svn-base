package p10340;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			String[] str = line.split(" ");
			out.append(contains(str[0].toCharArray(), str[1].toCharArray()) ? "Yes\n" : "No\n");
		}
		System.out.print(out);
	}

	public static boolean contains(char[] word, char[] text) {
		int index = 0;
		for (char letter : word)
			if ((index = indexOf(letter, text, index)) < 0)
				return false;
		return true;
	}

	public static int indexOf(char letter, char[] text, int index) {
		for (int i = index; i < text.length; i++)
			if (letter == text[i])
				return i + 1;
		return -1;
	}
}
