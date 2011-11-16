package p438;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class Main {
	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		DecimalFormat format = new DecimalFormat("0.00");
		final double PI = 3.141592653589793;
		String line;
		while ((line = in.readLine()) != null) {
			String[] num = line.split(" ");
			double x1 = Double.parseDouble(num[0]);
			double y1 = Double.parseDouble(num[1]);
			double x2 = Double.parseDouble(num[2]);
			double y2 = Double.parseDouble(num[3]);
			double x3 = Double.parseDouble(num[4]);
			double y3 = Double.parseDouble(num[5]);

			double xCenter = (x1 + x2 + x3);
			xCenter/=3;
			double yCenter = (y1 + y2 + y3);
			yCenter/=3;
			double radius = (xCenter - x2) * (xCenter - x2) + (yCenter - y2) * (yCenter - y2);
			double circunference = 2 * PI * Math.sqrt(radius);
			out.append(format.format(circunference) + "\n");

		}
		System.out.print	(out);
	}
}
