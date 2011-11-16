package p483;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			String[] words = line.split(" ");
			StringBuilder out2 = new StringBuilder();
			for (int i = 0; i < words.length; i++)
				out2.append(new StringBuilder(words[i]).reverse().toString() + " ");
			out.append(out2.toString().trim() + "\n");
		}
		System.out.print(out);
	}

}
