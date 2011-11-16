#include <stdio.h>
#include <string.h>

int path[200][200], size;
char cities[200][31];

int max(int a, int b) {
	return a > b ? a : b;
}

int min(int a, int b) {
	return a < b ? a : b;
}

void maxFlow() {
	for (int k = 0; k < size; k++)
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				path[i][j] = max(path[i][j], min(path[i][k], path[k][j]));
}

int indexOf(char* city) {
	for (int i = 0; i < size; i++)
		if (strcmp(city, cities[i]) == 0)
			return i;
	strcpy(cities[size], city);
	return size++;
}

int main() {
	int n, r, indexA, indexB, weight, numCase = 1, i;
	char city[31];
	while (scanf("%d%d", &n, &r) == 2 && n && r) {
		size = 0;
		for (i = 0; i < r; i++) {
			scanf("%s", city);
			indexA = indexOf(city);
			scanf("%s", city);
			indexB = indexOf(city);
			scanf("%d", &weight);
			path[indexA][indexB] = path[indexB][indexA] = weight;
		}
		maxFlow();
		scanf("%s", city);
		indexA = indexOf(city);
		scanf("%s", city);
		indexB = indexOf(city);
		printf("Scenario #%d\n%d tons\n\n", numCase++, path[indexA][indexB]);
	}
}
