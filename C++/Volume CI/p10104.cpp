#include <stdio.h>

int main() {
	long a, b, quotient, temp;
	while (scanf("%ld%ld", &a, &b) == 2) {
		long x = 0, y = 1, lastX = 1, lastY = 0;
		while (b != 0) {
			quotient = a / b;
			temp = b;
			b = a % b;
			a = temp;
			temp = x;
			x = lastX - quotient * x;
			lastX = temp;
			temp = y;
			y = lastY - quotient * y;
			lastY = temp;
		}
		printf("%ld %ld %ld\n", lastX, lastY, a);
	}
}
