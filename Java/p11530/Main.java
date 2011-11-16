package p11530;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int j = 1; j <= n; j++) {
			char[] line = in.readLine().toCharArray();
			int total = 0;
			for (int i = 0; i < line.length; i++) {
				char letter = line[i];
				if (letter == ' ' || letter == 'a' || letter == 'd' || letter == 'g' || letter == 'j' || letter == 'm' || letter == 'p' || letter == 't' || letter == 'w')
					total += 1;
				else if (letter == 'b' || letter == 'e' || letter == 'h' || letter == 'k' || letter == 'n' || letter == 'q' || letter == 'u' || letter == 'x')
					total += 2;
				else if (letter == 'c' || letter == 'f' || letter == 'i' || letter == 'l' || letter == 'o' || letter == 'r' || letter == 'v' || letter == 'y')
					total += 3;
				else if (letter == 's' || letter == 'z')
					total += 4;
			}
			out.append("Case #" + j + ": " + total + "\n");
		}
		System.out.print(out);
	}
}
