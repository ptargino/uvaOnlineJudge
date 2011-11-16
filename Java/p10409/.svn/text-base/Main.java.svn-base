package p10409;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n;
		while ((n = Integer.parseInt(in.readLine())) != 0) {
			int[][] dice = { { 3, 1, 4 }, { 0, 5, 0 }, { 0, 6, 0 }, { 0, 2, 0 } };
			int face = 1;
			for (int i = 0; i < n; i++) {
				face = face(in.readLine(), dice);
			}
			out.append(face + "\n");
		}
		System.out.print(out);
	}

	private static int face(String str, int[][] dice) {
		if (str.equals("north")) {
			int aux = dice[0][1];
			dice[0][1] = dice[1][1];
			dice[1][1] = dice[2][1];
			dice[2][1] = dice[3][1];
			dice[3][1] = aux;
		} else if (str.equals("south")) {
			int aux = dice[3][1];
			dice[3][1] = dice[2][1];
			dice[2][1] = dice[1][1];
			dice[1][1] = dice[0][1];
			dice[0][1] = aux;
		} else if (str.equals("west")) {
			int aux = dice[0][0];
			dice[0][0] = dice[0][1];
			dice[0][1] = dice[0][2];
			dice[0][2] = aux;
		} else if (str.equals("east")) {
			int aux = dice[0][2];
			dice[0][2] = dice[0][1];
			dice[0][1] = dice[0][0];
			dice[0][0] = aux;
		}
		return dice[0][1];
	}
}
