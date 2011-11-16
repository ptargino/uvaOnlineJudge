import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

class Hand {

	private int[] kind = new int[4];
	private int[][] value = new int[13][2];
	private boolean straight = false;
	private char[] a, b, c, d, e;
	private int gameType;

	private int map(char ch) {
		if (ch >= '2' && ch <= '9')
			return ch - '0' - 2;
		switch (ch) {
		case 'T':
			return 8;
		case 'J':
			return 9;
		case 'Q':
			return 10;
		case 'K':
			return 11;
		case 'A':
			return 12;
		case 'C':
			return 0;
		case 'D':
			return 1;
		case 'H':
			return 2;
		case 'S':
			return 3;
		}
		return -1;
	}

	public Hand(String a, String b, String c, String d, String e) {
		this.a = a.toCharArray();
		this.b = b.toCharArray();
		this.c = c.toCharArray();
		this.d = d.toCharArray();
		this.e = e.toCharArray();
		kind[map(this.a[1])]++;
		kind[map(this.b[1])]++;
		kind[map(this.c[1])]++;
		kind[map(this.d[1])]++;
		kind[map(this.e[1])]++;
		value[map(this.a[0])][0]++;
		value[map(this.b[0])][0]++;
		value[map(this.c[0])][0]++;
		value[map(this.d[0])][0]++;
		value[map(this.e[0])][0]++;
		for (int i = 0; i < 9; i++)
			if (value[i][0] == 1 && value[i + 1][0] == 1 && value[i + 2][0] == 1 && value[i + 3][0] == 1 && value[i + 4][0] == 1)
				straight = true;
		for (int i = 0; i < 13; i++)
			value[i][1] = i;
		sort();
		Arrays.sort(kind);
		gameType = game();
	}

	private void sort() {
		int tempA, tempB;
		for (int i = 0; i < 13; i++)
			for (int j = 0; j < i; j++)
				if (value[i][0] < value[j][0] || (value[i][0] == value[j][0] && value[i][1] < value[j][1])) {
					tempA = value[i][0];
					tempB = value[i][1];
					value[i][0] = value[j][0];
					value[i][1] = value[j][1];
					value[j][0] = tempA;
					value[j][1] = tempB;
				}
	}

	private int game() {
		if (kind[3] == 5 && straight)
			return 10;
		if (value[12][0] == 4)
			return 9;
		if (value[12][0] == 3 && value[11][0] == 2)
			return 8;
		if (kind[3] == 5)
			return 7;
		if (straight)
			return 6;
		if (value[12][0] == 3)
			return 5;
		if (value[12][0] == 2 && value[11][0] == 2)
			return 4;
		if (value[12][0] == 2)
			return 3;
		return 2;
	}

	public int compareTo(Hand h) {
		if (this.gameType == h.gameType) {
			switch (this.gameType) {
			case 10:
				return compare(h, 1);
			case 9:
				return compare(h, 1);
			case 8:
				return compare(h, 1);
			case 7:
				return compare(h, 5);
			case 6:
				return compare(h, 1);
			case 5:
				return compare(h, 1);
			case 4:
				return compare(h, 3);
			case 3:
				return compare(h, 4);
			case 2:
				return compare(h, 5);
			default:
				return 0;
			}
		}
		return this.gameType - h.gameType;
	}

	private int compare(Hand h, int quant) {
		for (int i = 0; i < quant; i++)
			if (this.value[12 - i][1] != h.value[12 - i][1])
				return this.value[12 - i][1] - h.value[12 - i][1];
		return 0;
	}
}

public class Problem10315 {
	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder out = new StringBuilder();
		String line;
		while ((line = in.readLine()) != null) {
			String[] card = line.split(" ");
			Hand a = new Hand(card[0], card[1], card[2], card[3], card[4]);
			Hand b = new Hand(card[5], card[6], card[7], card[8], card[9]);
			int cmp = a.compareTo(b);
			if (cmp == 0)
				out.append("Tie.\n");
			else if (cmp < 0)
				out.append("White wins.\n");
			else
				out.append("Black wins.\n");
		}
		System.out.print(out);
	}
}
