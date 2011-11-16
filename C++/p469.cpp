#include <stdio.h>
#include <stdlib.h>

const int SIZE = 101;
const char oldColor = 'W', newColor = 'L';
char matrix[SIZE][SIZE], copy[SIZE][SIZE];
int count;

void floodFill(int i, int j) {
	if (copy[i][j] != oldColor)
		return;
	copy[i][j] = newColor;
	count++;
	floodFill(i + 1, j + 1);
	floodFill(i + 1, j);
	floodFill(i + 1, j - 1);
	floodFill(i, j + 1);
	floodFill(i, j - 1);
	floodFill(i - 1, j - 1);
	floodFill(i - 1, j);
	floodFill(i - 1, j + 1);
}

void initialize() {
	int i, j;
	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			matrix[i][j] = newColor;
}

void copyMatrix() {
	int i, j;
	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			copy[i][j] = matrix[i][j];
}

int getArea(int i, int j) {
	count = 0;
	copyMatrix();
	floodFill(i, j);
	return count;
}

int main() {
	int i, j, numLines, numCases;
	char line[101];
	scanf("%d", &numCases);
	scanf("%s", line);
	for (; numCases; numCases--) {
		initialize();
		numLines = 1;
		do {
			for (j = 0; line[j] != '\0'; j++)
				matrix[numLines][j + 1] = line[j];
			numLines++;
		} while (scanf("%s", line) == 1 && (line[0] == newColor || line[0] == oldColor));
		do {
			i = atoi(line);
			scanf("%d", &j);
			printf("%d\n", getArea(i, j));
		} while (scanf("%s", line) == 1 && !(line[0] == newColor || line[0] == oldColor));
		if (numCases > 1)
			printf("\n");
	}
}
