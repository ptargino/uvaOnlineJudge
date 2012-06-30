#include <stdio.h>

int main() {
	int a, b, c, d, total;
	while (scanf("%d%d%d%d", &a, &b, &c, &d) && (a | b | c | d)){
		printf("%d\n", (120 + (a + 40 - b) % 40 + (c + 40 - b) % 40 + (c + 40 - d) % 40) * 9);
	}
}
