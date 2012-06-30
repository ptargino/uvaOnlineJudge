#include <stdio.h>
#include <string.h>

int main() {
	char a[100][81], line[81];
	int n, size, i, j, t, k;
	char* ans = "the quick brown fox jumps over the lazy dog";
	bool found;
	scanf("%d", &n);
	gets(line);
	gets(line);
	for (t = 0; t < n; t++) {
		size = 0;
		while (gets(line) && line[0] != '\0') {
			strcpy(a[size++], line);
		}
		found = false;
		for (i = 0; i < 26 && !found; i++) {
			for (j = 0; j < size; j++){
				for (k = 0; a[j][k] != '\0'; k++)
					if (a[j][k] >= 'a' && a[j][k] <= 'z')
						a[j][k] = 'a' + (a[j][k] - 'a' + 1) % 26;
				puts(a[j]);
			}
			printf("\n");
			for (j = 0; j < size; j++)
				if (strcmp(a[j], ans) == 0) {
					found = true;
				}
		}
		if (t)
			printf("\n");
		if (found) {
			for (i = 0; i < 26; i++)
				puts(a[i]);
		} else {
			puts("No Solution.");
		}
	}

}
