package p10141;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int count = 1;
		String line = in.readLine();
		while (!(line).equals("0 0")) {
			String[] num = line.split(" ");
			int n = Integer.parseInt(num[0]);
			int m = Integer.parseInt(num[1]);
			for (int i = 0; i < n; i++)
				in.readLine();
			int maxQuant;
			double minPrice;
			String name = in.readLine();
			num = in.readLine().split(" ");
			double price = Double.parseDouble(num[0]);
			int quant = Integer.parseInt(num[1]);
			for (int j = 0; j < quant; j++)
				in.readLine();
			minPrice = price;
			maxQuant = quant;
			for (int i = 0; i < m - 1; i++) {
				String newName = in.readLine();
				num = in.readLine().split(" ");
				price = Double.parseDouble(num[0]);
				quant = Integer.parseInt(num[1]);
				for (int j = 0; j < quant; j++)
					in.readLine();
				if (quant > maxQuant) {
					name = newName;
					maxQuant = quant;
				} else if (quant == maxQuant && price < minPrice) {
					name = newName;
					minPrice = price;
				}
			}
			line = in.readLine();
			if (!(line).equals("0 0"))
				out.append("RFP #" + count + "\n" + name + "\n\n");
			else
				out.append("RFP #" + count + "\n" + name + "\n");
			count++;

		}
		System.out.print(out);
	}
}
