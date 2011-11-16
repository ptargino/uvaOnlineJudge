package p10010_Waldorf;

import java.util.Scanner;

class Main {

	public static char[][] matriz;
	public static StringBuilder out;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		out = new StringBuilder();
		int quant = sc.nextInt();
		while (quant > 0) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			sc.nextLine();
			matriz = new char[n][m];
			for (int j = 0; j < n; j++) {
				String line = sc.nextLine().toLowerCase();
				for (int l = 0; l < m; l++) {
					matriz[j][l] = line.charAt(l);
				}
			}
			int words = sc.nextInt();
			sc.nextLine();
			String word;
			for (int j = 0; j < words; j++) {
				word = sc.nextLine().toLowerCase();
				procura(word.toCharArray());
				if (j < words - 1)
					out.append("\n");
			}
			out.append("\n");
			if (quant > 1)
				out.append("\n");
			quant--;
		}
		System.out.print(out);
	}

	private static void procura(char[] nome) {
		int n = matriz.length;
		int m = matriz[0].length;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				// Direita
				if (m - j >= nome.length) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i][j + k])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Esquerda
				if (j >= nome.length - 1) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i][j - k])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Baixo
				if (n - i >= nome.length) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i + k][j])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Acima
				if (i >= nome.length - 1) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i - k][j])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Sudeste
				if (m - j >= nome.length && n - i >= nome.length) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i + k][j + k])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Nordeste
				if (m - j >= nome.length && i >= nome.length - 1) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i - k][j + k])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Noroeste
				if (j >= nome.length - 1 && i >= nome.length - 1) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i - k][j - k])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}

				// Sudoeste
				if (j >= nome.length - 1 && n - i >= nome.length) {
					int k;
					for (k = 0; k < nome.length; k++)
						if (nome[k] != matriz[i + k][j - k])
							break;
					if (k == nome.length) {
						out.append((i + 1) + " " + (j + 1));
						return;
					}
				}
			}
	}
}
