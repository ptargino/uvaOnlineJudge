#include <stdio.h>
#include <string.h>

char previous[101], word[101];

bool equals(int start) {
	for (int i = 0; previous[start + i] != '\0'; i++)
		if (word[i] != previous[start + i])
			return false;
	return true;
}

int main() {
	int k, w, n, scroll, i, j;
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d%s", &k, &w, word);
		scroll = k;
		for (i = 1; i < w; i++) {
			strcpy(previous, word);
			scanf("%s", word);
			for (j = 0; j < k; j++)
				if (equals(j))
					break;
			scroll += j;
		}
		printf("%d\n", scroll);
	}
}
