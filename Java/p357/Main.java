package p357;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		int[] coin = { 50, 25, 10, 5, 1 };
		long[] numWays = new long[30001];
		int i, j, n, c;
		numWays[0] = 1;
		for (i = 0; i < 5; i++) {
			c = coin[i];
			for (j = c; j <= 30000; j++)
				numWays[j] += numWays[j - c];
		}

		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			n = Integer.parseInt(line);
			if (numWays[n] == 1)
				out.append("There is only 1 way to produce " + n + " cents change.\n");
			else
				out.append("There are " + numWays[n] + " ways to produce " + n + " cents change.\n");
		}
		System.out.print(out);
	}
}
