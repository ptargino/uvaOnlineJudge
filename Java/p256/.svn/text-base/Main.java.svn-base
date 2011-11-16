package p256;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		String[][] digit = { {}, { "00", "01", "81" }, { "0000", "0001", "2025", "3025", "9801" }, { "000000", "000001", "088209", "494209", "998001" },
				{ "00000000", "00000001", "04941729", "07441984", "24502500", "25502500", "52881984", "60481729", "99980001" } };
		Scanner in = new java.util.Scanner(System.in);
		while (in.hasNextInt()) {
			int digits = in.nextInt() / 2;
			for (String number : digit[digits])
				System.out.println(number);
		}
	}

}
