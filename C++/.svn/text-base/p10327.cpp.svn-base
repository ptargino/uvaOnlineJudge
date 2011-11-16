#include <stdio.h>

using namespace std;

long bubble(int v[], int qtd) {
	long total = 0, i, j, aux, k = qtd - 1;
	for (i = 0; i < qtd; i++) {
		for (j = 0; j < k; j++)
			if (v[j] > v[j + 1]) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				total++;
			}
		k--;
	}
	return total;
}

int main() {
	int i, n, array[1000];
	while (scanf("%d", &n) == 1) {
		for (i = 0; i < n; i++)
			scanf("%d", &array[i]);
		printf("Minimum exchange operations : %ld\n", bubble(array, n));
	}
}
