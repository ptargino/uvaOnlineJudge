#include <stdio.h>

int main() {
	int n, i, num;
	bool printed;
	while (scanf("%d", &n) && n) {
		printed = false;
		for (i = 0; i < n && !printed; i++)
			if (scanf("%d", &num) && num) {
				printf("%d", num);
				printed = true;
			}
		for (; i < n; i++)
			if (scanf("%d", &num) && num)
				printf(" %d", num);
		if (!printed)
			printf("0");
		printf("\n");
	}
}
