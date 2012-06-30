#include <stdio.h>
#define MAX 200

int graph[MAX][MAX], colored[MAX];
bool visited[MAX];

bool DFS(int n, int start) {
	visited[start] = true;
	for (int i = 0; i < n; i++)
		if (graph[start][i] == 1 && visited[i] == false) {
			if (colored[start] == 1) {
				if (colored[i] == 0)
					colored[i] = 2;
				else if (colored[i] == 1)
					return false;
			} else {
				if (colored[i] == 0)
					colored[i] = 1;
				else if (colored[i] == 2)
					return false;
			}
			DFS(n, i);
		}
	return true;
}

int main() {
	int n, m, vA, vB, count = 1;
	while (scanf("%d", &n) == 1) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				graph[i][j] = 0;

		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			scanf("%d%d", &vA, &vB);
			vA--;
			vB--;
			graph[vA][vB] = 1;
			graph[vB][vA] = 1;
		}

		for (int i = 0; i < n; i++) {
			colored[i] = 0;
			visited[i] = false;
		}

		bool can = true;
		for (int i = 0; i < n; i++)
			if (!visited[i]){
				colored[i] = 1;
				if (!DFS(n, i)){
					can = false;
					break;
				}
			}
		if (can)
			printf("Instancia %d\nsim\n\n", count++);
		else
			printf("Instancia %d\nnao\n\n", count++);

	}
}

