package p11137;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		int[] coin = new int[21];
		for (int i = 1; i <= 21; i++)
			coin[i - 1] = i * i * i;
		long[] numWays = new long[10001];
		numWays[0] = 1;
		for (int i = 0; i < 21; i++) {
			int c = coin[i];
			for (int j = c; j <= 10000; j++)
				numWays[j] += numWays[j - c];
		}
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null)
			out.append(numWays[Integer.parseInt(line.trim())] + "\n");
		System.out.print(out);
	}
}
