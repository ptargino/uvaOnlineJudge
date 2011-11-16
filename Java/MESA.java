
import java.util.Scanner;

class MESA {
	
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
		int count = 1;
		testCase: while (in.hasNextInt()) {
			out.append("Instancia " + (count++) + "\n");
			int nodes = in.nextInt();
			boolean[] colorA = new boolean[nodes];
			boolean[] colorB = new boolean[nodes];
			int numEdges = in.nextInt();
			edges = new int[numEdges][2];
			for (int i = 0; i < numEdges; i++) {
				edges[i][0] = in.nextInt() - 1;
				edges[i][1] = in.nextInt() - 1;
			}
			colorA[edges[0][0]] = true;
			int nodeA, nodeB;
			for (int i = 0; hasMoreEdges(); i = (i + 1) % numEdges)
				if ((nodeA = edges[i][0]) != -1 && (nodeB = edges[i][1]) != -1)
					if ((colorA[nodeA] && colorA[nodeB]) || (colorB[nodeA] && colorB[nodeB])) {
						out.append("nao\n\n");
						continue testCase;
					} else if (colorB[nodeA] || colorA[nodeB]) {
						colorA[nodeB] = colorB[nodeA] = true;
						edges[i][0] = -1;
					} else if (colorA[nodeA] || colorB[nodeB]) {
						colorA[nodeA] = colorB[nodeB] = true;
						edges[i][0] = -1;
					}
			out.append("sim\n\n");
		}
		System.out.print(out);
	}
}
