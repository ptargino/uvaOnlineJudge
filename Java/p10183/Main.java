package p10183;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws Throwable {
		BigInteger[] fib = new BigInteger[481];
		int i;
		fib[0] = BigInteger.ONE;
		fib[1] = new BigInteger("2");
		BigInteger max = new BigInteger("10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		i = 1;
		while (fib[i++].compareTo(max) <= 0)
			fib[i] = fib[i - 1].add(fib[i - 2]);
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while (!(line = in.readLine()).equals("0 0")) {
			String[] num = line.split(" ");
			BigInteger a = new BigInteger(num[0]);
			BigInteger b = new BigInteger(num[1]);
			i = -1;
			while (fib[i + 1].compareTo(a) < 0)
				i++;
			int count = 0;
			while (fib[++i].compareTo(b) <= 0)
				count++;
			out.append(count + "\n");
		}
		System.out.print(out);

	}
}
