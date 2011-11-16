package p10260;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	private static int[] soundex = { 0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2 };

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null)
			out.append(soundCodex(line.toCharArray()) + "\n");
		System.out.print(out);
	}

	private static String soundCodex(char[] line) {
		StringBuilder out = new StringBuilder();
		if (line.length == 0)
			return "";
		int index = soundex[line[0] - 'A'];
		if (index != 0)
			out.append(index);
		for (int i = 1; i < line.length; i++) {
			index = soundex[line[i] - 'A'];
			if (index != 0 && index != soundex[line[i - 1] - 'A'])
				out.append(index);
		}
		return out.toString();
	}
}
