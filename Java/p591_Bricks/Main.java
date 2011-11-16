package p591_Bricks;
import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n;
		int setNumber = 0;
		while ((n = in.nextInt()) != 0) {
			setNumber++;
			int[] height = new int[n];
			int media = 0;
			for (int i = 0; i < n; i++) {
				int aux = in.nextInt();
				height[i] = aux;
				media += aux;
			}
			media /= n;
			int moves = 0;
			for (int i = 0; i < n; i++) {
				int over = height[i] - media;
				if (over > 0)
					moves += over;
			}
			System.out.println("Set #" + setNumber + "\nThe minimum number of moves is " + moves
					+ ".\n");
		}
	}
}
