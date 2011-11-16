package p10222;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		String[] mapString = { "`1234567890-=", "qwertyuiop[]\\", "asdfghjkl;\'", "zxcvbnm,./" };
		char[][] map = { mapString[0].toCharArray(), mapString[1].toCharArray(), mapString[2].toCharArray(), mapString[3].toCharArray() };

		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			char[] text = line.toLowerCase().toCharArray();
			for (int i = 0; i < text.length; i++) {
				if (text[i] != ' ') {
					int index = -1;
					if ((index = mapString[0].indexOf(text[i])) >= 0) {
						text[i] = map[0][index - 2];
					} else if ((index = mapString[1].indexOf(text[i])) >= 0) {
						text[i] = map[1][index - 2];
					} else if ((index = mapString[2].indexOf(text[i])) >= 0) {
						text[i] = map[2][index - 2];
					} else if ((index = mapString[3].indexOf(text[i])) >= 0) {
						text[i] = map[3][index - 2];
					}
				}
			}
			out.append(text);
			out.append('\n');
		}
		System.out.print(out);

	}
}
