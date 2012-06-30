#include <iostream>

using namespace std;

int main() {
	int i, j, numCase, table[101][101], tower1[101], tower2[101], size1, size2;
	for (i = 0; i < 101; i++)
		table[i][0] = table[0][i] = 0;
	numCase = 1;
	while (scanf("%d%d", &size1, &size2) && (size1 || size2)) {
		for (i = 0; i < size1; i++)
			scanf("%d", &tower1[i]);
		for (i = 0; i < size2; i++)
			scanf("%d", &tower2[i]);
		for (i = 0; i < size1; i++)
			for (j = 0; j < size2; j++)
				table[i + 1][j + 1] = (tower1[i] == tower2[j]) ? 1
						+ table[i][j] : max(table[i][j + 1], table[i + 1][j]);
		printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", numCase++, table[i][j]);
	}
}
