#include <stdio.h>
#include <math.h>

int main() {
	int n, x, y, square, distance;
	while (scanf("%d", &n) && n) {
		square = (int) sqrt(n - 1);
		distance = n - square * square;
		if (distance == 0) {
			x = 1;
			y = square;
		} else if (distance <= square + 1) {
			x = distance;
			y = square + 1;
		} else {
			x = square + 1;
			y = 2* (square + 1) - distance;
		}
		if (square % 2 == 0) printf("%d %d\n",y,x);
		else printf("%d %d\n",x,y);
	}
	return 0;
}
