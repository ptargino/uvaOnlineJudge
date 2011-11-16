package p10696;

import java.util.Scanner;

public class Main {
	
	static int[] calculated = new int[1000001];

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		 int n;
		 while ((n = in.nextInt()) != 0){
			out.append("f91(" + n + ") = " + f91(n) + "\n");
		 }
		System.out.print(out);
	}

	private static int f91(int n) {
		return (n > 100) ? n - 10 : 91;
	}

}
