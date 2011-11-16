package p11219;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		for (int i = 1; i <= n; i++) {
			in.readLine();
			String[] currentDate = in.readLine().split("/");
			int day = Integer.parseInt(currentDate[0]);
			int month = Integer.parseInt(currentDate[1]);
			int year = Integer.parseInt(currentDate[2]);

			String[] birthDate = in.readLine().split("/");
			int birthDay = Integer.parseInt(birthDate[0]);
			int birthMonth = Integer.parseInt(birthDate[1]);
			int birthYear = Integer.parseInt(birthDate[2]);

			out.append("Case #" + i + ": ");
			if ((year < birthYear) || (year == birthYear && (month < birthMonth || (month == birthMonth && day < birthDay)))) {
				out.append("Invalid birth date");
			} else {
				int age = year - birthYear;
				if (month < birthMonth || (month == birthMonth && day < birthDay))
					age--;
				out.append(age > 130 ? "Check birth date" : age);
			}
			out.append("\n");
		}
		System.out.print(out);
	}
}
