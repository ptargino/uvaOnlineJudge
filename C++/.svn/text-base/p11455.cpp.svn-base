#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int side[4], n, i, j, k, temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d %d %d", &side[0], &side[1], &side[2], &side[3]);
		sort(side, side + 4);
		if (side[0] == side[1] && side[1] == side[2] && side[2] == side[3])
			printf("square\n");
		else if (side[0] == side[1] && side[2] == side[3])
			printf("rectangle\n");
		else if (side[3] < side[0] + side[1] + side[2])
			printf("quadrangle\n");
		else
			printf("banana\n");

	}
}
