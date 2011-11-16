package p594;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int i;
		String line;
		while ((line = in.readLine()) != null) {
			i = Integer.parseInt(line);
			int x1, x2, x3, x4;
			x1 = (i >>> 24);
			x2 = (i << 8) >>> 24;
			x3 = (i << 16) >>> 24;
			x4 = (i << 24) >>> 24;
			int o = (x4 << 24) + (x3 << 16) + (x2 << 8) + (x1);
			out.append(i + " converts to " + o+"\n");
		}
		System.out.print(out);
		
	}
}
