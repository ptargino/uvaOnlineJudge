package p10669;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		BigInteger tree = new BigInteger("3");
		long n;
		while ((n = in.nextLong()) != 0) {
			out.append("{");
			char[] binary = Long.toBinaryString(n - 1).toCharArray();
			int size = binary.length - 1;
			int i = 0;
			while (i <= size) {
				if (binary[size - i] == '1') {
					out.append(" " + tree.pow(i++));
					break;
				}
				i++;
			}

			for (; i <= size; i++) 
				if (binary[size - i] == '1')
					out.append(", " + tree.pow(i));
			out.append(" }\n");
		}
		System.out.print(out);
	}
}
