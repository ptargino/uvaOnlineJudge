package p11057;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int n;
		while (in.hasNextInt()) {
			n = in.nextInt();
			int[] price = new int[10000];
			for (int i = 0; i < n; i++)
				price[in.nextInt()]++;
			int m = in.nextInt();
			int i = 0;
			if (m % 2 == 0 && price[m / 2] >= 2) {
				i = m / 2;
			} else if(m >= 1){
				i = (m - 1) / 2;
				while (price[i] == 0 || price[m - i] == 0)
					i--;
			}
			out.append("Peter should buy books whose prices are " + i + " and " + (m - i) + ".\n\n");
		}
		System.out.print(out);
	}
}
