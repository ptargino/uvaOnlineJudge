#include <iostream>

using namespace std;

int main() {
	int i, j, k, index, count, total, numCase, table[101][101];
	for (i = 0; i < 101; i++)
		table[i][0] = 0;
	for (i = 0; i < 101; i++)
		table[0][i] = 0;
	char line1[101], line2[101];
	numCase = 1;
	while (gets(line1) && strcmp(line1, "#")) {
		gets(line2);
		for (i = 0; line1[i] != '\0'; i++)
			for (j = 0; line2[j] != '\0'; j++)
				if (line1[i] == line2[j])
					table[i + 1][j + 1] = 1 + table[i][j];
				else
					table[i + 1][j + 1] = max(table[i][j + 1], table[i + 1][j]);
		printf("Case #%d: you can visit at most %d cities.\n", numCase++,	table[i][j]);
	}
}
