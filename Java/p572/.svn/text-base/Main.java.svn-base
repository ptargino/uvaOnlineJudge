package p572;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static char[][] matrix;
	
	private static void paintAdjascents(int i, int j) {
		matrix[i][j] = '*';
		if (matrix[i][j + 1] == '@')
			paintAdjascents(i, j + 1);
		if (matrix[i][j - 1] == '@')
			paintAdjascents(i, j - 1);
		if (matrix[i + 1][j] == '@')
			paintAdjascents(i + 1, j);
		if (matrix[i - 1][j] == '@')
			paintAdjascents(i - 1, j);
		if (matrix[i + 1][j + 1] == '@')
			paintAdjascents(i + 1, j + 1);
		if (matrix[i - 1][j - 1] == '@')
			paintAdjascents(i - 1, j - 1);
		if (matrix[i + 1][j - 1] == '@')
			paintAdjascents(i + 1, j - 1);
		if (matrix[i - 1][j + 1] == '@')
			paintAdjascents(i - 1, j + 1);
	}

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line;
		while (!(line = in.readLine()).startsWith("0")) {
			String[] numbers = line.split(" ");
			int m = Integer.parseInt(numbers[0]);
			int n = Integer.parseInt(numbers[1]);
			matrix = new char[m + 2][n + 2];
			for (int i = 1; i <= m; i++) {
				matrix[i] = ("*" + in.readLine() + "*").toCharArray();
			}
			int count = 0;
			for (int i = 1; i <= m; i++)
				for (int j = 1; j <= n; j++)
					if (matrix[i][j] == '@') {
						paintAdjascents(i, j);
						count++;
					}
			System.out.println(count);
		}
	}
}
