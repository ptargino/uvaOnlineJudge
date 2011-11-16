package p156;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;

class Ananagram implements Comparable<Ananagram> {

	private String str;
	private String value;

	public Ananagram(String str) {
		this.str = str;
		char[] a = str.toLowerCase().toCharArray();
		Arrays.sort(a);
		this.value = new String(a);
	}

	public boolean equals(Object o) {
		return this.value.equals(((Ananagram) o).value);
	}

	public String toString() {
		return this.str;
	}

	public int compareTo(Ananagram o) {
		return this.str.compareTo(o.str);
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		StringBuilder out = new StringBuilder();
		ArrayList<Ananagram> set = new ArrayList<Ananagram>();
		ArrayList<Ananagram> trash = new ArrayList<Ananagram>();
		Ananagram a;
		String word;
		while (!(word = in.next()).equals("#")) {
			a = new Ananagram(word);
			if (trash.contains(a)) {
				set.remove(a);
			} else {
				trash.add(a);
				set.add(a);
			}
		}
		Collections.sort(set);
		Iterator<Ananagram> it = set.iterator();
		while (it.hasNext())
			out.append(it.next() + "\n");
		System.out.print(out);
	}
}
