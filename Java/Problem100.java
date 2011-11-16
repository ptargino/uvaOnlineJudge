

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Problem100 {

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		StringTokenizer numeros;
		int[] cycles = new int[1000001];
		while ((line = in.readLine()) != null) {
			numeros = new StringTokenizer(line);
			int a = Integer.parseInt(numeros.nextToken());
			int b = Integer.parseInt(numeros.nextToken());
			int min = Math.min(a, b);
			int max = Math.max(a, b);
			int maxCiclos = 0;
			for (int i = min; i <= max; i++) {
				if (cycles[i] == 0) {
					int n = i;
					int numCiclos = 1;
					while (n != 1) {
						n = (n % 2) != 0 ? 3 * n + 1 : n / 2;
						numCiclos++;
					}
					cycles[i] = numCiclos;
				}
				if (cycles[i] > maxCiclos)
					maxCiclos = cycles[i];
			}
			out.append(a + " " + b + " " + maxCiclos + "\n");
		}
		System.out.print(out);
	}
}