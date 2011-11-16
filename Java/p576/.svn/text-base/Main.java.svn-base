package p576;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String haiku;
		while (!(haiku = in.readLine()).equals("e/o/i")) {
			String[] lines = haiku.split("/");
			if (numSyllabes(lines[0]) != 5)
				out.append("1\n");
			else if (numSyllabes(lines[1]) != 7)
				out.append("2\n");
			else if (numSyllabes(lines[2]) != 5)
				out.append("3\n");
			else
				out.append("Y\n");
		}
		System.out.print(out);
	}

	private static int numSyllabes(String string) {
		boolean continuous = false;
		String vowels = "aeiouy";
		int numSyllabes = 0;
		for (char letter : string.toCharArray())
			if (vowels.contains("" + letter) && !continuous) {
				numSyllabes++;
				continuous = true;
			} else if (!vowels.contains("" + letter))
				continuous = false;
		return numSyllabes;
	}
}
