package p11508;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		boolean hacked;
		int[] indeponent, s;
		int num, size;
		while (!(line = in.readLine()).equals("0")) {
			String[] tokens = line.split(" ");
			hacked = false;
			s = new int[tokens.length];
			indeponent = new int[tokens.length];
			Arrays.fill(indeponent, -1);
			size = 0;
			for (int i = 0; i < tokens.length && !hacked; i++) {
				num = Integer.parseInt(tokens[i]);
				if (num >= tokens.length)
					hacked = true;
				else if (indeponent[num] == -1)
					indeponent[num] = num;
				else
					s[size++] = num;
			}
			size = 0;
			if (hacked)
				out.append("Message hacked by the Martians!!!\n");
			else {
				for (int indep : indeponent)
					out.append((indep == -1 ? s[size++] : indep) + " ");
				out.append("\n");
			}
		}
		System.out.print(out);
	}
}
