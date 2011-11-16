package p10107;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	static int[] array = new int[10000];
	static int n = 0;

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			array[n] = Integer.parseInt(line.trim());
			n++;
			sort();
			out.append((n % 2 == 1 ? array[(n - 1) / 2] : ((array[n / 2] + array[n / 2 - 1]) / 2)) + "\n");
		}
		System.out.print(out);
		
	}

	static void sort() {
		int temp;
		for (int i = n - 1; i > 0; i--) {
			if (array[i] < array[i - 1]) {
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
			} else {
				return;
			}
		}
	}
}
