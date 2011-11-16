#include <stdio.h>

int main() {
	unsigned long n, p;
	while (scanf("%lu", &n) == 1) {
		p = 1;
		while (true) {
			p *= 9;
			if (p >= n) {
				printf("Stan wins.\n");
				break;
			}
			p <<= 1;
			if (p >= n) {
				printf("Ollie wins.\n");
				break;
			}
		}
	}
}
