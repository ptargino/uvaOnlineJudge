package p352;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static char[][] matrix;

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line;
		int num = 1;
		while ((line = in.readLine()) != null) {
			int n = Integer.parseInt(line);
			matrix = new char[n + 2][n + 2];
			for (int i = 1; i <= n; i++) {
				matrix[i] = ("0" + in.readLine() + "0").toCharArray();
			}
			int count = 0;
			for (int i = 1; i <= n; i++)
				for (int j = 1; j <= n; j++)
					if (matrix[i][j] == '1') {
						paintAdjascents(i, j);
						count++;
					}
			System.out.println("Image number " + num + " contains " + count + " war eagles.");
			num++;
		}
	}

	private static void paintAdjascents(int i, int j) {
		matrix[i][j] = '0';
		if (matrix[i][j + 1] == '1')
			paintAdjascents(i, j + 1);
		if (matrix[i][j - 1] == '1')
			paintAdjascents(i, j - 1);
		if (matrix[i + 1][j] == '1')
			paintAdjascents(i + 1, j);
		if (matrix[i - 1][j] == '1')
			paintAdjascents(i - 1, j);
		if (matrix[i + 1][j + 1] == '1')
			paintAdjascents(i + 1, j + 1);
		if (matrix[i - 1][j - 1] == '1')
			paintAdjascents(i - 1, j - 1);
		if (matrix[i + 1][j - 1] == '1')
			paintAdjascents(i + 1, j - 1);
		if (matrix[i - 1][j + 1] == '1')
			paintAdjascents(i - 1, j + 1);
	}

}
