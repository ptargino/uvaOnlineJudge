#include <iostream>
#include <stdlib.h>

using namespace std;
    int main() {
	char line1[1001], line2[1001];
	int table[1001][1001];
	int i, j, k, index, count, total;
	for (i = 0; i < 1001; i++)
		table[i][0] = 0;
	for (i = 0; i < 1001; i++)
		table[0][i] = 0;
	while (gets(line1)) {
		gets(line2);
		for (i = 1; line1[i] != '\0'; i++)
			for (j = 1; j < line2[j] != '\0'; j++)
				if (line1[i] == line2[j])
					table[i][j] = 1 + table[i - 1][j - 1];
				else
					table[i][j] = max(table[i - 1][j], table[i][j - 1]);
		printf("%d\n", table[i][j]);
	}
}

