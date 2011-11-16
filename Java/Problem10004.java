

import java.util.Scanner;

public class Problem10004 {
	private static int[][] edges;

	private static boolean hasMoreEdges() {
		for (int[] edge : edges)
			if (edge[0] >= 0)
				return true;
		return false;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		int nodes;
		testCase: while ((nodes = in.nextInt()) != 0) {
			boolean[] colorA = new boolean[nodes];
			boolean[] colorB = new boolean[nodes];
			int numEdges = in.nextInt();
			edges = new int[numEdges][2];
			for (int i = 0; i < numEdges; i++) {
				edges[i][0] = in.nextInt();
				edges[i][1] = in.nextInt();
			}
			colorA[edges[0][0]] = true;
			int nodeA, nodeB;
			for (int i = 0; hasMoreEdges(); i = (i + 1) % numEdges)
				if ((nodeA = edges[i][0]) != -1 && (nodeB = edges[i][1]) != -1)
					if ((colorA[nodeA] && colorA[nodeB]) || (colorB[nodeA] && colorB[nodeB])) {
						out.append("NOT BICOLORABLE.\n");
						continue testCase;
					} else if (colorB[nodeA] || colorA[nodeB]) {
						colorA[nodeB] = colorB[nodeA] = true;
						edges[i][0] = -1;
					} else if (colorA[nodeA] || colorB[nodeB]) {
						colorA[nodeA] = colorB[nodeB] = true;
						edges[i][0] = -1;
					}
			out.append("BICOLORABLE.\n");
		}
		System.out.print(out);
	}
}
