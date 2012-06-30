#include <stdio.h>
#include <algorithm>

using namespace std;

long aux[5000];

void reArrange(int begin, int end) {
	long temp;
	for (int i = begin + 1; i < end && aux[i - 1] > aux[i]; i++) {
		temp = aux[i - 1];
		aux[i - 1] = aux[i];
		aux[i] = temp;
	}
}

int main() {
	int n, i;
	long total;
	while (scanf("%d", &n) && n) {
		for (i = 0; i < n; i++)
			scanf("%ld", &aux[i]);
		sort(aux, aux + n);
		total = 0;
		for (i = 1; i < n; i++) {
			total += aux[i] = aux[i - 1] + aux[i];
			reArrange(i, n);
		}
		printf("%ld\n", total);
	}
}
