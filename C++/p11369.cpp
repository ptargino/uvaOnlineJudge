#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int t, n, i,prices[20000];
	long total;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &prices[i]);
		sort(prices, prices + n);
		total = 0;
		for (i = n % 3; i < n; i += 3)
			total += prices[i];
		printf("%ld\n", total);
	}
}
