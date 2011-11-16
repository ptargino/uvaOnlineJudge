#include <stdio.h>

int main() {
	char line[501], letter;
	int k, n, times, i, j;
	scanf("%d", &n);
	gets(line);
	for (k = 1; k <= n; k++) {
		gets(line);
		i = 0;
		printf("Case %d: ", k);
		while (line[i] != '\0') {
			letter = line[i++];
			times = 0;
			while (line[i] != '\0' && line[i] >= '0' && line[i] <= '9') {
				times = 10 * times + (line[i] - '0');
				i++;
			}
			for (j = 0; j < times; j++)
				putchar(letter);
		}
		putchar('\n');
	}
}
