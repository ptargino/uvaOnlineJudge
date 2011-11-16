package p446;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String[] ex;
		int n = Integer.parseInt(in.readLine());
		for (int i = 0; i < n; i++) {
			ex = in.readLine().split(" ");
			Integer num1 = Integer.valueOf(ex[0], 16);
			Integer num2 = Integer.valueOf(ex[2], 16);
			Integer result = (ex[1].equals("+") ? num1 + num2 : num1 - num2);
			String binary1 = Integer.toBinaryString(num1);
			String binary2 = Integer.toBinaryString(num2);
			int lenght = 13 - binary1.length();
			for (int j = 0; j < lenght; j++)
				binary1 = "0" + binary1;
			lenght = 13 - binary2.length();
			for (int j = 0; j < lenght; j++)
				binary2 = "0" + binary2;
			out.append(binary1 + " " + ex[1] + " " + binary2 + " = " + result + "\n");
		}
		System.out.print(out);
	}
}
