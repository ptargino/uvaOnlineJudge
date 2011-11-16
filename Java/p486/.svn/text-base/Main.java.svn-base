package p486;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class Main {
	public static void main(String[] args) throws Exception {
		Map<String, Integer> sum = new HashMap<String, Integer>();
		sum.put("zero", 0);
		sum.put("one", 1);
		sum.put("two", 2);
		sum.put("three", 3);
		sum.put("four", 4);
		sum.put("five", 5);
		sum.put("six", 6);
		sum.put("seven", 7);
		sum.put("eight", 8);
		sum.put("nine", 9);
		sum.put("ten", 10);
		sum.put("eleven", 11);
		sum.put("twelve", 12);
		sum.put("thirteen", 13);
		sum.put("fourteen", 14);
		sum.put("fifteen", 15);
		sum.put("sixteen", 16);
		sum.put("seventeen", 17);
		sum.put("eighteen", 18);
		sum.put("nineteen", 19);
		sum.put("twenty", 20);
		sum.put("thirty", 30);
		sum.put("forty", 40);
		sum.put("fifty", 50);
		sum.put("sixty", 60);
		sum.put("seventy", 70);
		sum.put("eighty", 80);
		sum.put("ninety", 90);
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			long total = 0;
			long subtotal = 0;
			boolean negative = false;
			for (String word : line.split(" ")) {
				if (word.equals("negative")) {
					negative = true;
				} else if (word.equals("hundred")) {
					subtotal *= 100;
				} else if (word.equals("thousand")) {
					total += subtotal * 1000;
					subtotal = 0;
				} else if (word.equals("million")) {
					total += subtotal * 1000000;
					subtotal = 0;
				} else if (sum.containsKey(word)) {
					subtotal += sum.get(word);
				}
			}
			total += subtotal;
			if (negative)
				total *= -1;
			out.append(total + "\n");
		}
		System.out.print(out);
	}
}