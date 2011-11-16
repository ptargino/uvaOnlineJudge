package p673;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();

		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			StringBuilder line = new StringBuilder(in.readLine());
			int indexA = -1, indexB = -1;
			while ((indexA = line.indexOf("()")) >= 0 || (indexB = line.indexOf("[]")) >= 0) {
				if(indexA >= 0)
					line.delete(indexA, indexA+2);
				else if(indexB >= 0)
					line.delete(indexB, indexB+2);
				indexA = -1;
				indexB = -1;
			}
			out.append(line.length() == 0 ? "Yes\n" : "No\n");
		}
		System.out.print(out);
	}
}
