package p10038;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Problem10038 {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line = null;
		StringBuilder out = new StringBuilder();
		while ((line = in.readLine()) != null) {
			StringTokenizer token = new StringTokenizer(line, " ");
			int n = Integer.parseInt(token.nextToken());
			int[] numbers = new int[n - 1];
			int atual = Integer.parseInt(token.nextToken());
			int anterior;
			for (int i = 0; i < n - 1; i++) {
				anterior = atual;
				atual = Integer.parseInt(token.nextToken());
				numbers[i] = (anterior - atual < 0) ? atual - anterior : anterior - atual;
			}
			Arrays.sort(numbers);
			int count = 1;
			boolean jolly = true;
			while (count < n) {
				if (numbers[count - 1] != count) {
					jolly = false;
					break;
				}
				count++;
			}
			out.append((jolly ? "Jolly" : "Not jolly") + "\n");
		}
		System.out.print(out);
	}
}
