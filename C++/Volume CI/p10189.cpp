#include <stdio.h>
#include <string.h>

int main() {
	int n, m, i, j, count = 1;
	char word[101], mine[102][102];
	bool first = true;
	while (scanf("%d%d", &n, &m) == 2 && n && m) {
		for (i = 0; i < 102; i++)
			for (j = 0; j < 102; j++)
				mine[i][j] = '.';
		if (first)	first = false;
		else		putchar('\n');
		gets(word);
		for (i = 1; i <= n; i++) {
			gets(word);
			for (int j = 1; j <= m; j++)
				mine[i][j] = word[j - 1];
		}
		printf("Field #%d:\n", count++);
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				if (mine[i][j] == '*')
					putchar('*');
				else {
					char quant = '0';
					if (mine[i + 1][j + 1] == '*')	quant++;
					if (mine[i][j + 1] == '*')		quant++;
					if (mine[i + 1][j] == '*')		quant++;
					if (mine[i + 1][j - 1] == '*')	quant++;
					if (mine[i - 1][j + 1] == '*')	quant++;
					if (mine[i][j - 1] == '*')		quant++;
					if (mine[i - 1][j] == '*')		quant++;
					if (mine[i - 1][j - 1] == '*')	quant++;
					putchar(quant);
				}
			}
			putchar('\n');
		}
	}
}
