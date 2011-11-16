#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int t, n, i, auxSize;
	int a[1000], aux[2];
	long totalTime;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		sort(a, a + n);

		printf("%ld\n", totalTime);
		if (t != 1)
			printf("\n");
	}
}
