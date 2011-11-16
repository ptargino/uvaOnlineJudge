#include <stdio.h>

int main() {
	bool chosen[21];
	int n, k, m, i, aChoise, bChoise, deleted, count;
	while (scanf("%d%d%d", &n, &k, &m) == 3 && n && k && m) {
		for (i = 0; i <= n; i++)
			chosen[i] = false;
		deleted = 0;
		aChoise = 0;
		bChoise = n + 1;
		while (deleted < n) {
			count = k % (n - deleted);
			if (count == 0)
				count = n - deleted;
			while (count) {
				aChoise++;
				if (aChoise > n)
					aChoise = 1;
				if (!chosen[aChoise])
					count--;
			}
			count = m % (n - deleted);
			if (count == 0)
				count = n - deleted;
			while (count) {
				bChoise--;
				if (bChoise < 1)
					bChoise = n;
				if (!chosen[bChoise])
					count--;
			}
			if (aChoise == bChoise) {
				deleted++;
				chosen[aChoise] = true;
				printf("%3d", aChoise);
			} else {
				deleted += 2;
				chosen[aChoise] = true;
				chosen[bChoise] = true;
				printf("%3d%3d", aChoise, bChoise);
			}
			if (deleted != n)
				printf(",");
			else
				printf("\n");
		}

	}

}
