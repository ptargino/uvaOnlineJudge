#include <stdio.h>

int main() {
	int n, i, j;
	int age[101];
	while (scanf("%d", &n) && n) {
		for (i = 0; i < 101; i++)
			age[i] = 0;
		for (i = 0; i < n; i++) {
			int num;
			scanf("%d", &num);
			age[num]++;
		}
		int index = 0;
		while (index < 101 && age[index] == 0)
			index++;
		if (age[index] > 0) {
			printf("%d", index);
			age[index]--;
		}
		for (i = index; i < 101; i++)
			for (j = 0; j < age[i]; j++)
				printf(" %d", i);
		printf("\n");
	}
	return 0;
}
