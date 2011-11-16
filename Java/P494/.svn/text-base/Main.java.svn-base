package P494;

import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line;
		while ((line = in.readLine()) != null) {
			char[] letra = line.toLowerCase().toCharArray();
			int count = 0;
			int i = 0;
			while (i < letra.length) {
				if (letra[i] >= 'a' && letra[i] <= 'z')
					count++;
				while (i < letra.length && letra[i] >= 'a' && letra[i] <= 'z')
					i++;
				while (i < letra.length && (letra[i] < 'a' || letra[i] > 'z'))
					i++;
			}
			System.out.println(count);
		}
	}
}
