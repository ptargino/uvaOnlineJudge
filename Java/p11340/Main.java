package p11340;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		DecimalFormat format = new DecimalFormat("0.00");
		int[] value;
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			value = new int[65536];
			int m = Integer.parseInt(in.readLine());
			for (int j = 0; j < m; j++) {
				String[] line = in.readLine().split(" ");
				char letter = line[0].charAt(0);
				value[letter] = Integer.parseInt(line[1]);
			}
			
			m = Integer.parseInt(in.readLine());
			double total=0;
			for (int j = 0; j < m; j++) {
				char[] line = in.readLine().toCharArray();
				for(char letter:line)
					total += value[letter];
			}
			total /=100;
			out.append(format.format(total)+"$\n");
			
			
		}
		System.out.print(out);
	}
}
