#include <stdio.h>
#include <string.h>

const int size = 64;
int path[size][size];

int min(int a, int b) {
	return a < b ? a : b;
}

int abs(int a) {
	return a < 0 ? -a : a;
}

void initialize(){
	int i, j, x1, y1, x2, y2;
	for (i = 0; i < size; i++) {
		x1 = i >> 3;
		y1 = i % 8;
		for (j = 0; j <= i; j++) {
			x2 = j >> 3;
			y2 = j % 8;
			if (i == j)
				path[i][j] = 0;
			else if (abs((x1 - x2) * (y1 - y2)) == 2)
				path[i][j] = path[j][i] = 1;
			else
				path[i][j] = path[j][i] = 10;
		}
	}
}

void maxFlow() {
	for (int k = 0; k < size; k++)
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				path[i][j] = min(path[i][j], path[i][k] + path[k][j]);
}

int main() {
	initialize();
	maxFlow();
	char a[3], b[3];
	while (scanf("%s%s", a, b) == 2) {
		i = ((a[0] - 'a') << 3) + (a[1] - '1');
		j = ((b[0] - 'a') << 3) + (b[1] - '1');
		printf("To get from %s to %s takes %d knight moves.\n", a, b, path[i][j]);
	}
}
