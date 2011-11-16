package p10405;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		int[][] table = new int[1001][1001];
		while ((line = in.readLine()) != null) {
			char[] line1 = line.toCharArray();
			char[] line2 = in.readLine().toCharArray();
			for (int i = 1; i <= line1.length; i++)
				for (int j = 1; j <= line2.length; j++)
					if (line1[i - 1] == line2[j - 1])
						table[i][j] = 1 + table[i - 1][j - 1];
					else
						table[i][j] = Math.max(table[i - 1][j], table[i][j - 1]);
			out.append(table[line1.length][line2.length] + "\n");
		}
		System.out.print(out);
	}
}
