#include <stdio.h>
#include <string.h>

int main() {
	int g, i, j, size;
	char line[101], temp;
	while (scanf("%d", &g) && g) {
		scanf("%s", &line);
		size = strlen(line);
		g = size / g;
		for (i = 0; i < size; i += g)
			for (j = 0; j < g / 2; j++) {
				temp = line[i + j];
				line[i + j] = line[i + g - 1 - j];
				line[i + g - 1 - j] = temp;
			}
		printf("%s\n", line);
	}
}
