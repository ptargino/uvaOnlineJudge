package p272;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			out.append(line + "\n");
		}
		int index;
		while ((index = out.indexOf("\"")) >= 0) {
			out.replace(index, index + 1, "``");
			index = out.indexOf("\"");
			out.replace(index, index + 1, "\'\'");
		}
		System.out.print(out);

	}
}
