package p11220;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line, word;
		int numCase = 1;
		int n = new Integer(in.readLine());
		int i;
		line = in.readLine();
		while (true) {
			if (line == null) {
				break;
			} else if (line.equals("")) {
				n--;
				if (numCase == 1)
					out.append("Case #" + (numCase++) + ":\n");
				else
					out.append("\nCase #" + (numCase++) + ":\n");
			} else {
				i = 0;
				StringTokenizer token = new StringTokenizer(line);
				while (token.hasMoreTokens()) {
					word = token.nextToken();
					if (word.length() > i)
						out.append(word.charAt(i++));
				}
				out.append('\n');
			}
		}
		System.out.print(out);
	}

}
