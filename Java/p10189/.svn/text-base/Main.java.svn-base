package p10189;

import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int count = 1;
		StringBuilder out = new StringBuilder();
		while (true) {
			int n = in.nextInt();
			int m = in.nextInt();
			if (n == 0 & m == 0) {
				break;
			}
			in.nextLine();

			char[][] mine = new char[n + 2][m + 2];
			for (int i = 1; i <= n; i++) {
				char[] word = in.nextLine().trim().toCharArray();
				for (int j = 1; j <= m; j++) {
					mine[i][j] = word[j - 1];
				}
			}

			out.append("Field #" + count + ":\n");
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= m; j++) {
					if (mine[i][j] == '*')
						out.append('*');
					else {
						char quant = '0';
						if (mine[i + 1][j + 1] == '*')
							quant++;
						if (mine[i][j + 1] == '*')
							quant++;
						if (mine[i + 1][j] == '*')
							quant++;
						if (mine[i + 1][j - 1] == '*')
							quant++;
						if (mine[i - 1][j + 1] == '*')
							quant++;
						if (mine[i][j - 1] == '*')
							quant++;
						if (mine[i - 1][j] == '*')
							quant++;
						if (mine[i - 1][j - 1] == '*')
							quant++;
						out.append(quant);
					}
				}
				out.append('\n');
			}
			out.append('\n');
			count++;
		}
		if (out.length() > 0)
			out.deleteCharAt(out.length() - 1);
		System.out.print(out);
	}
}
