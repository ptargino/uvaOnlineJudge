package p496;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		StringTokenizer token;
		HashSet<String> setA = new HashSet<String>(), setB = new HashSet<String>();
		while ((line = in.readLine()) != null) {
			int total = 0;
			token = new StringTokenizer(line);
			setA.clear();
			while (token.hasMoreTokens()) {
				setA.add(token.nextToken());
				total++;
			}
			line = in.readLine();
			token = new StringTokenizer(line);
			setB.clear();
			while (token.hasMoreTokens()) {
				setB.add(token.nextToken());
				total++;
			}
			if (setA.equals(setB))
				out.append("A equals B\n");
			else if (setA.containsAll(setB))
				out.append("B is a proper subset of A\n");
			else if (setB.containsAll(setA))
				out.append("A is a proper subset of B\n");
			else if (setA.addAll(setB) && setA.size() == total)
				out.append("A and B are disjoint\n");
			else
				out.append("I'm confused!\n");
		}
		System.out.print(out);
	}
}
