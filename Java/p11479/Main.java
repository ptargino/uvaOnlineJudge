package p11479;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n = in.nextInt();
		for (int i = 1; i <= n; i++) {
			long[] side = new long[3];
			side[0] = in.nextLong();
			side[1] = in.nextLong();
			side[2] = in.nextLong();
			Arrays.sort(side);

			if (side[0] == 0 || side[0] + side[1] <= side[2])
				out.append("Case " + i + ": Invalid\n");
			else if (side[0] == side[1] && side[1] == side[2])
				out.append("Case " + i + ": Equilateral\n");
			else if (side[0] == side[1] || side[1] == side[2])
				out.append("Case " + i + ": Isosceles\n");
			else
				out.append("Case " + i + ": Scalene\n");
		}
		System.out.print(out);
		
	}
}
