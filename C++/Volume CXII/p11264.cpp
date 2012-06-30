#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int k = 1; k <= n; k++) {
		int m;
		scanf("%d", &m);
		long a[m];
		for (int i = 0; i < m; i++)
			scanf("%ld", &a[i]);
		long resto = 0;
		int count = 1;
		for (int i = 0; i < m-1; i++)
			if (a[i] + resto < a[i + 1]) {
				count++;
				resto += a[i];
			}
		printf("%d\n", count);
	}
}
