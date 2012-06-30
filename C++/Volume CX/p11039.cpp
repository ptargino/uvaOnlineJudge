#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool isLess(long a, long b) {
	return labs(a) < labs(b);
}

int main() {
	long *floor = new long[500000];
	long t, n, i, count;
	bool last;
	scanf("%ld", &t);
	for (; t; t--) {
		scanf("%ld", &n);
		for (i = 0; i < n; i++)
			scanf("%ld", &floor[i]);
		sort(floor, floor + n, isLess);
		count = 1;
		last = floor[0] < 0;
		for (i = 0; i < n; i++)
			if (last ^ floor[i] < 0) {
				last = floor[i] < 0;
				count++;
			}
		printf("%ld\n", count);
	}
}
