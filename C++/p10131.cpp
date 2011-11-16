#include <iostream>
#include <algorithm>

using namespace std;

struct st {
	int index;
	int weigth;
	int iq;
};

st aux[1000];
int prev[1000], best[1000];

bool isLess(st a, st b) {
	return a.iq > b.iq;
}

int lis(int N) {
	int i, j, max = 0, index = 0;
	for (i = 0; i < N; i++)
		best[i] = 1, prev[i] = i;
	for (i = 1; i < N; i++)
		for (j = 0; j < i; j++)
			if (aux[i].weigth > aux[j].weigth && best[j] + 1 > best[i])
				best[i] = best[j] + 1, prev[i] = j;
	for (i = 1; i < N; i++)
		if (max < best[i]) {
			max = best[i];
			index = i;
		}
	return index;
}

void ans(int index) {
	if (index){
		ans(prev[index]);
		printf("%d\n", aux[index].index);
	}
}

int main() {
	int i, size = 1, index;
	while (scanf("%d%d", &aux[size].weigth, &aux[size].iq) == 2)
		aux[size].index = size++;
	sort(aux + 1, aux + size, isLess);
	index = lis(size);
	printf("%d\n", best[index]-1);
	ans(index);
}
