#include <stdio.h>

int main() {
	int n, i, num, count, aux, inc, ans[101];
	int LAST = 13;
	bool on[101];
	for (i = 0; i < 101; i++)
		ans[i] = 0;
	while (scanf("%d", &n) && n) {
		if (!ans[n]) {
			inc = 1;
			while (ans[n] == 0) {
				for (i = 0; i <= n; i++)
					on[i] = true;
				count = n;
				num = 1;
				while (num != LAST) {
					on[num] = false;
					aux = inc;
					while (aux) {
						num++;
						if (num > n)
							num %= n;
						if (on[num])
							aux--;
					}
					count--;
				}
				if (count == 1)
					ans[n] = inc;
				inc++;
			}
		}
		printf("%d\n", ans[n]);
	}

}
