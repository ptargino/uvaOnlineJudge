#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long int n, x, y, square, distance;
	while (cin >> n) {
		square = (long int) sqrt(2 * n);
		while ((square * (square + 1)) / 2 < n)
			square++;
		distance = (square * (square + 1)) / 2 - n;
		x = square - distance;
		y = 1 + distance;
		if (square % 2)
			printf("TERM %ld IS %ld/%ld\n", n, y, x);
		else
			printf("TERM %ld IS %ld/%ld\n", n, x, y);
	}
}
