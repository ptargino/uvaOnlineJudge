#include <stdio.h>

int main() {
	int max, min, t, n, num;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d", &n);
		scanf("%d", &num);
		min = max = num;
		n--;
		for (; n; n--) {
			scanf("%d", &num);
			if (num < min)
				min = num;
			else if (num > max)
				max = num;
		}
		printf("%d\n", (max - min) * 2);
	}
}
