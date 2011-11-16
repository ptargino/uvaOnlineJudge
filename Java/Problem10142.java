import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class Problem10142 {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		StringTokenizer token;
		String line;
		ArrayList<String> name = new ArrayList<String>();
		ArrayList<ArrayList<Integer>> vote = new ArrayList<ArrayList<Integer>>();
		int t = new Integer(in.readLine());
		in.readLine();
		out: for (int k = 0; k < t; k++) {
			name.clear();
			vote.clear();
			int n = new Integer(in.readLine());
			for (int i = 0; i < n; i++)
				name.add(in.readLine());
			while ((line = in.readLine())!= null && line.length() != 0) {
				vote.add(new ArrayList<Integer>());
				token = new StringTokenizer(line);
				while (token.hasMoreTokens())
					vote.get(vote.size() - 1).add(new Integer(token.nextToken()));
			}
			if (vote.size() > 0) {
				if (k > 0)
					out.append("\n");
				while (true) {
					int[] numVotes = new int[n + 1];
					int min, max, indexMax;
					for (int i = 0; i < vote.size(); i++)
						numVotes[vote.get(i).get(0)]++;
					max = min = numVotes[1];
					indexMax = 1;
					while (numVotes[indexMax] == 0)
						indexMax++;
					min = max = numVotes[indexMax];
					for (int i = indexMax + 1; i < numVotes.length; i++)
						if (numVotes[i] != 0) {
							if (numVotes[i] < min)
								min = numVotes[i];
							if (numVotes[i] > max) {
								max = numVotes[i];
								indexMax = i;
							}
						}
					if (max > vote.size() / 2) {
						out.append(name.get(indexMax - 1) + "\n");
						continue out;
					} else if (max == min) {
						for (int i = 0; i < name.size(); i++)
							if (numVotes[i + 1] != 0)
								out.append(name.get(i) + "\n");
						continue out;
					} else 
						for (int i = 0; i < vote.size(); i++) 
							for (int j = 0; j < numVotes.length; j++) 
								if (numVotes[j] == min)
									vote.get(i).remove(new Integer(j));
				}
			}
		}
		System.out.print(out);
	}
}
