import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class Problem10258 implements Comparable<Problem10258> {

	private int contestant, numProblemsSolved, totalTime;

	public int compareTo(Problem10258 o) {
		if (this.numProblemsSolved == o.numProblemsSolved) {
			if (this.totalTime == o.totalTime) {
				return this.contestant - o.contestant;
			}
			return this.totalTime - o.totalTime;
		}
		return o.numProblemsSolved - this.numProblemsSolved;
	}

	public Problem10258(int contestant, int numProblemsSolved, int totalTime) {
		this.contestant = contestant;
		this.numProblemsSolved = numProblemsSolved;
		this.totalTime = totalTime;
	}

	public String toString() {
		return contestant + " " + numProblemsSolved + " " + totalTime + "\n";
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		String[] token;
		int n = Integer.parseInt(in.readLine());
		in.readLine();
		for (int k = 0; k < n; k++) {
			if(k!=0)
				out.append("\n");
			boolean[] submited = new boolean[101];
			boolean[][] solved = new boolean[101][11];
			int[][] teamTime = new int[101][11];
			while (true) {
				line = in.readLine();
				if (line == null || line.length() == 0)
					break;
				token = line.split(" ");

				int tokenA = Integer.parseInt(token[0]);
				int tokenB = Integer.parseInt(token[1]);
				int tokenC = Integer.parseInt(token[2]);
				submited[tokenA] = true;
				if (!solved[tokenA][tokenB])
					if (token[3].equals("C")) {
						teamTime[tokenA][tokenB] += tokenC;
						solved[tokenA][tokenB] = true;
					} else if (token[3].equals("I")) {
						teamTime[tokenA][tokenB] += 20;
					}
			}
			ArrayList<Problem10258> ranking = new ArrayList<Problem10258>();
			for (int i = 1; i < 101; i++) {
				if (submited[i]) {
					int problemsSolved = 0;
					int time = 0;
					for (int j = 1; j < 11; j++)
						if (solved[i][j]) {
							time += teamTime[i][j];
							problemsSolved++;
						}
					ranking.add(new Problem10258(i, problemsSolved, time));
				}
			}
			Collections.sort(ranking);
			for (int i = 0; i < ranking.size(); i++)
				out.append(ranking.get(i).toString());


		}
		System.out.print(out);
	}
}
