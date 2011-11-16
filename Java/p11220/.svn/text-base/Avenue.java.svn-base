package p11220;

import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class Avenue {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		DecimalFormat format = new DecimalFormat("0.0000000000");
		while (in.hasNextInt()) {
			int n = in.nextInt();
			int l = in.nextInt();
			int w = in.nextInt();
			int pos[] = new int[n];
			for (int i = 0; i < n; i++)
				pos[i] = in.nextInt();
			Arrays.sort(pos);
			int intervals = (n / 2) - 1;
			double[] dp = new double[n / 2 + 1];
			for (int i = n - 1; i >= 0; i--) {
				double[] old = dp;
				dp = new double[n / 2 + 1];
				for (int leftPlaced = 0, rightPlaced = i - leftPlaced; leftPlaced <= i; leftPlaced++, rightPlaced--) {
					if (leftPlaced > n / 2 || rightPlaced > n / 2)
						continue;
					double best = -1;
					if (leftPlaced + 1 <= n / 2) {
						double ly = (double) leftPlaced / intervals * l;
						double ldist = Math.abs(pos[i] - ly);
						best = ldist + old[leftPlaced + 1];
					}
					if (rightPlaced + 1 <= n / 2) {
						double ry = (double) rightPlaced / intervals * l;
						double rdist = Math.sqrt(Math.pow(w, 2) + Math.pow(pos[i] - ry, 2));
						if (best >= 0)
							best = Math.min(best, rdist + old[leftPlaced]);
						else
							best = rdist + old[leftPlaced];
					}
					dp[leftPlaced] = best;
				}
			}
			out.append(format.format(dp[0]) + "\n");
		}
		System.out.print(out);
	}
}
