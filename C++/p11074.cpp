#include <stdio.h>

void draw(int s, int t, int n) {

	int i, j, k, l, width, index;
	width = n * (s + t) + t;
	char line[1000];
	for (i = 0; i < t; i++) {
		index = 0;
		for (j = 0; j < width; j++)
			line[index++] = '*';
		line[index++] = '\0';
		puts(line);
	}

	for (k = 0; k < n; k++) {
		for (i = 0; i < s; i++) {
			index = 0;
			for (j = 0; j < t; j++)
				line[index++] = '*';
			for (l = 0; l < n; l++) {
				for (j = 0; j < s; j++)
					line[index++] = '.';
				for (j = 0; j < t; j++)
					line[index++] = '*';
			}
			line[index++] = '\0';
			puts(line);
		}

		for (i = 0; i < t; i++) {
			index = 0;
			for (j = 0; j < width; j++)
				line[index++] = '*';
			line[index++] = '\0';
			puts(line);
		}
	}
	putchar('\n');
}

int main() {
	int s, t, n, i = 1;
	while (scanf("%d%d%d", &s, &t, &n) == 3 && s && t && n) {
		printf("Case %d:\n", i++);
		draw(s, t, n);
	}
}
