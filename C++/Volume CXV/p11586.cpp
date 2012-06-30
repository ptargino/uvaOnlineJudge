#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char line[1501];
	scanf("%d", &n);
	gets(line);
	for (int k = 1; k <= n; k++) {
		gets(line);
		int m = 0, f = 0;
		int i;
		for (int i = 0; line[i] != '\0'; i++) {
			if (line[i] == 'M')
				m++;
			if (line[i] == 'F')
				f++;
		}
		printf("%s\n", m == f && m != 1 ? "LOOP" : "NO LOOP");

	}
}
