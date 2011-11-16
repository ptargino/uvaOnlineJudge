package p10338;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws Exception {
		long[] fat = new long[21];
		fat[0] = 1;
		for (int i = 1; i < 21; i++)
			fat[i] = i * fat[i - 1];
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 1; i <= n; i++) {
			char[] line = in.readLine().toCharArray();
			Arrays.sort(line);
			long ans = fat[line.length];
			int k = 1;
			for (int j = 1; j < line.length; j++)
				if (line[j] == line[j - 1])
					k++;
				else {
					ans /= fat[k];
					k = 1;
				}
			ans /= fat[k];
			out.append("Data set " + i + ": " + ans + "\n");
		}
		System.out.print(out);
	}
}
