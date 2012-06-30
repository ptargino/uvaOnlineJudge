#include <stdio.h>
#include <string.h>

int main() {
	char a[12][12];
	int n;
	scanf("%d", &n);
	for (int k = 1; k <= n; k++) {
		int m;
		scanf("%d", &m);
		char line[m + 1];
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++)
				a[i][j] = '*';
		for (int i = 1; i <= m; i++) {
			scanf("%s", line);
			for (int j = 1; j <= m; j++)
				a[i][j] = line[j - 1];
		}
		printf("Case %d:\n",k);
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i][j] == '.') {
					char ch = 'A';
					while (a[i - 1][j] == ch || a[i + 1][j] == ch || a[i][j - 1] == ch || a[i][j + 1] == ch)
						ch++;
					a[i][j] = ch;
				}
				putchar(a[i][j]);
			}
			putchar('\n');
		}

	}
}
