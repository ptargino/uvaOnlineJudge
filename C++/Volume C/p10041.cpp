#include <stdio.h>
#include <algorithm>

using namespace std;

int abs(int a) {
	return a < 0 ? -a : a;
}

int main() {
	int t, n, i, median, s[500];
	long distance;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &s[i]);
		sort(s, s + n);
		distance = 0;
		median = s[n / 2];
		for (i = 0; i < n; i++)
			distance += abs(s[i] - median);
		printf("%ld\n", distance);
	}
}
