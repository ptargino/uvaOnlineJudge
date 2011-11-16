package p336;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		HashMap<Integer, ArrayList<Integer>> map = new HashMap<Integer, ArrayList<Integer>>();
		ArrayList<Integer> toVisit = new ArrayList<Integer>();
		ArrayList<Integer> visited = new ArrayList<Integer>();
		ArrayList<Integer> level = new ArrayList<Integer>();
		int n, numCase = 1;
		while ((n = in.nextInt()) != 0) {
			map.clear();
			for (int i = 0; i < n; i++) {
				int a = in.nextInt();
				int b = in.nextInt();
				if (!map.containsKey(a))
					map.put(a, new ArrayList<Integer>());
				if (!map.containsKey(b))
					map.put(b, new ArrayList<Integer>());
				map.get(a).add(b);
				map.get(b).add(a);
			}
			while (true) {
				int node = in.nextInt();
				int depth = in.nextInt();
				if (node == 0 && depth == 0) break;
				visited.clear();
				toVisit.clear();
				toVisit.add(node);
				int numLevels = -1;
				while (toVisit.size() != 0 && depth != numLevels) {
					numLevels++;
					level.clear();
					level.addAll(toVisit);
					toVisit.clear();
					for (int i = 0; i < level.size(); i++) {
						Integer num = level.get(i);
						if (!visited.contains(num)) {
							visited.add(num);
							if (map.get(num) != null)
								toVisit.addAll(map.get(num));
						}
					}
				}
				out.append("Case " + numCase++ + ": " + (map.size() - visited.size()) + 
						" nodes not reachable from node " + node + " with TTL = " + depth + ".\n");
			}
		}
		System.out.print(out);
	}
}
