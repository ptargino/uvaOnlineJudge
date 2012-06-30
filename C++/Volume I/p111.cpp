#include <stdio.h>

const int SIZE = 22;
int correct[SIZE], student[SIZE], table[SIZE][SIZE];

int max(int a, int b) {
	return a > b ? a : b;
}

int lcs(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		table[i][0] = 0;
		table[0][i] = 0;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			table[i + 1][j + 1] = (correct[i] == student[j]) ? 1 + table[i][j] : max(table[i][j + 1], table[i + 1][j]);
	return table[i][j];
}

int main() {
	int n, i, temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &temp);
		correct[temp - 1] = i + 1;
	}
	while (scanf("%d", &temp) == 1) {
		student[temp - 1] = 1;
		for (i = 1; i < n; i++) {
			scanf("%d", &temp);
			student[temp - 1] = i + 1;
		}
		printf("%d\n", lcs(n));
	}
}
