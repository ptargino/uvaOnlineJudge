package p490;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		int count = 0;
		int max = 0;
		char[][] name = new char[100][100];
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				name[i][j] = ' ';
			}
		}
		while ((line = in.readLine()) != null) {
			char[] column = line.toCharArray();
			if (max < column.length)
				max = column.length;
			for (int i = 0; i < column.length; i++)
				name[count][i] = column[i];
			count++;
		}

		for (int i = 0; i < max; i++) {
			for (int j = 0; j < count; j++)
				out.append(name[count-j-1][i]);
			out.append('\n');
		}
		System.out.print(out);
	}
}
