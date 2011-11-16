#include <stdio.h>
#include <algorithm>

using namespace std;

struct shoe {
	int index, time, cost;
};

bool isLessShoe(shoe a, shoe b) {
	if (a.cost * b.time == b.cost * a.time)
		return a.index < b.index;
	return (a.cost * b.time > b.cost * a.time);
}

int main() {
	int t, n, i;
	shoe a[1000];
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d%d", &a[i].time, &a[i].cost);
			a[i].index = i + 1;
		}
		sort(a, a + n, isLessShoe);
		printf("%d", a[0].index);
		for (i = 1; i < n; i++)
			printf(" %d", a[i].index);
		printf("\n");
		if (t > 1)
			printf("\n");
	}
}
