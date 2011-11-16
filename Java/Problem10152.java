import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Problem10152 {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		ArrayList<String> oldOrder = new ArrayList<String>(200);
		ArrayList<String> newOrder = new ArrayList<String>(200);
		ArrayList<String> moveOrder = new ArrayList<String>(200);
		int t = Integer.parseInt(in.readLine());
		for (int k = 0; k < t; k++) {
			oldOrder.clear();
			newOrder.clear();
			moveOrder.clear();
			int n = Integer.parseInt(in.readLine());
			for (int i = 0; i < n; i++)
				oldOrder.add(in.readLine());
			for (int i = 0; i < n; i++)
				newOrder.add(in.readLine());
			while (!oldOrder.equals(newOrder)) {
				moveOrder.add(newOrder.get(0));
				oldOrder.remove(newOrder.remove(0));
			}
			int len = moveOrder.size();
			for (int i = 1; i <= len; i++)
				out.append(moveOrder.get(len - i) + "\n");
			out.append("\n");
		}
		System.out.print(out);
	}
}
