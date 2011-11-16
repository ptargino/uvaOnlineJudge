package p10926;

import java.util.Scanner;

public class Main {
	static int[][] dependencies;
	static boolean[] visited;

	private static int numDependencies(int n) {
		int count = 0;
		for (int i = 0; i < dependencies[n].length; i++)
			if (!visited[dependencies[n][i]]) {
				visited[dependencies[n][i]] = true;
				count += 1 + numDependencies(dependencies[n][i]);
			}
		return count;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		while ((n = in.nextInt()) != 0) {
			dependencies = new int[n + 1][];
			for (int i = 1; i <= n; i++) {
				int m = in.nextInt();
				dependencies[i] = new int[m];
				for (int j = 0; j < m; j++)
					dependencies[i][j] = in.nextInt();
			}

			int maxDependencies = 0;
			int indexMax = 1;
			for (int i = 1; i <= n; i++) {
				visited = new boolean[n + 1];
				int iDepedencies = numDependencies(i);
				if (maxDependencies < iDepedencies) {
					indexMax = i;
					maxDependencies = iDepedencies;
				}
			}
			System.out.println(indexMax);
		}
	}
}
