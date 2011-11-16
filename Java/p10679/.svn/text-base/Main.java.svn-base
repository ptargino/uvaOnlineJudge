package p10679;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			String original = in.readLine();
			int m = Integer.parseInt(in.readLine());
			for (int j = 0; j < m; j++)
				out.append(original.startsWith(in.readLine()) ? "y\n" : "n\n");
		}
		System.out.print(out);
	}
}
