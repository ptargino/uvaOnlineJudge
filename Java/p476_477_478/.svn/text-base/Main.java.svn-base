package p476_477_478;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Throwable {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String[] list = new String[10];
		String line;
		int numFigures = 0;
		while (!(line = in.readLine()).equals("*"))
			list[numFigures++] = line;

		double[][] figure = new double[numFigures][];
		for (int i = 0; i < numFigures; i++) {
			StringTokenizer token = new StringTokenizer(list[i]);
			char type = token.nextToken().charAt(0);
			figure[i] = (type == 'r' ? new double[4] : (type == 'c' ? new double[3] : new double[6]));
			int j = 0;
			while (token.hasMoreTokens()) figure[i][j++] = Double.parseDouble(token.nextToken());
		}

		int numPoint = 1;
		while (!(line = in.readLine()).equals("9999.9 9999.9")) {
			String[] num = line.split(" ");
			double xPoint = Double.parseDouble(num[0]);
			double yPoint = Double.parseDouble(num[1]);
			boolean contained = false;
			for (int i = 0; i < numFigures; i++)
				if (isContained(xPoint, yPoint, figure[i])) {
					contained = true;
					out.append("Point " + numPoint + " is contained in figure " + (i + 1) + "\n");
				}
			if (!contained)
				out.append("Point " + numPoint + " is not contained in any figure\n");
			numPoint++;
		}
		System.out.print(out);

	}

	private static double det(double xA, double yA, double xB, double yB) {
		return xA * yB - yA * xB;
	}

	private static boolean containedTriangle(double xPoint, double yPoint, double xA, double yA, double xB, double yB, double xC, double yC) {
		double area0 = Math.abs(det(xA, yA, xB, yB) + det(xB, yB, xC, yC) + det(xC, yC, xA, yA));
		double area1 = Math.abs(det(xA, yA, xPoint, yPoint) + det(xPoint, yPoint, xC, yC) + det(xC, yC, xA, yA));
		double area2 = Math.abs(det(xA, yA, xB, yB) + det(xB, yB, xPoint, yPoint) + det(xPoint, yPoint, xA, yA));
		double area3 = Math.abs(det(xPoint, yPoint, xB, yB) + det(xB, yB, xC, yC) + det(xC, yC, xPoint, yPoint));
		return Math.abs((area1 + area2 + area3) - area0) <= 0.000001;
	}

	private static boolean containedCircle(double xPoint, double yPoint, double xCenter, double yCenter, double radius) {
		return (radius * radius) > ((xPoint - xCenter) * (xPoint - xCenter) + (yPoint - yCenter) * (yPoint - yCenter));
	}

	public static boolean containedRectangle(double xPoint, double yPoint, double xUpperLeft, double yUpperLeft, double xLowerRight, double yLowerRight) {
		return xPoint > xUpperLeft && yPoint < yUpperLeft && xPoint < xLowerRight && yPoint > yLowerRight;
	}

	private static boolean isContained(double xPoint, double yPoint, double[] coord) {
		if (coord.length == 4)
			return containedRectangle(xPoint, yPoint, coord[0], coord[1], coord[2], coord[3]);
		if (coord.length == 3)
			return containedCircle(xPoint, yPoint, coord[0], coord[1], coord[2]);
		return containedTriangle(xPoint, yPoint, coord[0], coord[1], coord[2], coord[3], coord[4], coord[5]);
	}

}
