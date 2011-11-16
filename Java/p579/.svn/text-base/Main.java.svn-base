package p579;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigDecimal;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line;
		StringBuilder out = new StringBuilder();
		while (!(line = in.readLine()).equals("0:00")) {
			String[] str = line.split(":");
			double hours = Integer.parseInt(str[0]);
			double minutes = Integer.parseInt(str[1]);
			double angleMinutes = minutes * 6;
			double angleHour = hours * 30 + (double) (minutes / 2);
			double totalAngle = Math.abs(angleHour - angleMinutes);
			if (totalAngle > 180)
				totalAngle = 360 - totalAngle;
			out.append(new BigDecimal(totalAngle).setScale(3, BigDecimal.ROUND_HALF_UP)
					+ "\n");
		}
		System.out.print(out);
	}
}
