#include <iostream>

using namespace std;

int main() {
	int **table = new int*[1001];
	int i, j, k, index, count, total;
	for (i = 0; i < 1000; i++)
		table[i] = new int[1001];
	for (i = 0; i < 10001; i++)
		table[i][0] = 0;
	for (i = 0; i < 1001; i++)
		table[0][i] = 0;
	char line1[1001], line2[1001];
	while (gets(line1)) {
		gets(line2);
		for (i = 0; line1[i] != '\0'; i++)
			for (j = 0; line2[j] != '\0'; j++)
				if (line1[i] == line2[j])
					table[i + 1][j + 1] = 1 + table[i][j];
				else
					table[i + 1][j + 1] = max(table[i][j + 1], table[i + 1][j]);
		printf("%d\n", table[i][j]);
	}
}
