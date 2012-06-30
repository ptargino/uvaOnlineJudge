#include <stdio.h>
#include <algorithm>

using namespace std;

int m;

bool cmp(long a, long b) {
	if (a % m != b % m)
		return a % m < b % m;
	if (a % 2 && b % 2)
		return a > b;
	if (a % 2 == 0 && b % 2 == 0)
		return a < b;
	return a % 2;
}

int main() {
	int i, n;
	long a[10000];
	while (scanf("%d%d", &n, &m) == 2 && (m || n)) {
		for (i = 0; i < n; i++)
			scanf("%ld", &a[i]);
		sort(a, a + n, cmp);
		printf("%d %d\n", n, m);
		for (i = 0; i < n; i++)
			printf("%ld\n", a[i]);
	}
	printf("0 0\n");
}
