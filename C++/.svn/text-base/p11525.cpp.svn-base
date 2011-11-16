#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num[50000], s[50000], i, k, t;
	long long n, j;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &k);
		for (j = 0; j < k; j++)
			scanf("%d", &s[j]);
		for (j = 0; j < k; j++)
			num[j] = j+1;
		n = 0;
		for (j = 0; j < k; j++)
			n += s[j] * (k - (j + 1));
		for (j = 0; j < n; j++)
			next_permutation(num, num + k);
		for (j = 0; j < k; j++)
			printf("%d ", num[j]);
		printf("\n");
	}

}

