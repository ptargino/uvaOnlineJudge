import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedList;

public class Problem10132 {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		int n = Integer.parseInt(in.readLine());
		in.readLine();
		String line;
		HashSet<String> frags = new HashSet<String>();
		for (int t = 0; t < n; t++) {
			while (((line = in.readLine()) != null) && (line.length() > 0)) {
				frags.add(line);
			}
			LinkedList<String> list = new LinkedList<String>(frags);
			Collections.sort(list, new Comparator<String>() {
				public int compare(String o1, String o2) {
					return o1.length() - o2.length();
				}
			});
			ArrayList<String> sol = new ArrayList<String>();
			ArrayList<String> pre = new ArrayList<String>();
			ArrayList<String> pos = new ArrayList<String>();
			int preSize = list.getFirst().length(), prosSize = list.getLast().length();
			while (preSize == list.getFirst().length())
				pre.add(list.removeFirst());
			while (prosSize == list.getLast().length())
				pos.add(list.removeLast());
			if (pre.size() == 1 && pos.size() == 1) {
				sol.add(pre.get(0) + pos.get(0));
				sol.add(pos.get(0) + pre.get(0));
			} else if (pre.size() == 2 && pos.size() == 2) {
				if ((pos.get(0) + pre.get(0)).equals(pos.get(1) + pre.get(1))) {

				}
				if ((pos.get(0) + pre.get(1)).equals(pos.get(1) + pre.get(0))) {

				}
				if ((pos.get(1) + pre.get(0)).equals(pos.get(0) + pre.get(1))) {

				} 

			}

			ArrayList<String> partSol = new ArrayList<String>();
			while (!list.isEmpty()) {
				preSize = list.getFirst().length();
				prosSize = list.getLast().length();
				pre.clear();
				pos.clear();
				partSol.clear();
				while (!list.isEmpty() && preSize == list.getFirst().length())
					pre.add(list.removeFirst());
				while (!list.isEmpty() && prosSize == list.getLast().length())
					pos.add(list.removeLast());
				if (pre.size() == pos.size())
					for (int i = 0; i < pre.size(); i++) {
						for (int j = 0; j < pos.size(); j++) {
							partSol.add(pre.get(i) + pos.get(j));
							partSol.add(pos.get(j) + pos.get(i));
						}
					}
				System.out.println(partSol);
				while (!partSol.isEmpty()) {
					if (!sol.contains(partSol.get(0))) {
						sol.remove(partSol.remove(0));
					}
				}
			}

			out.append(sol.get(0));

		}
		System.out.print(out);
	}
}
