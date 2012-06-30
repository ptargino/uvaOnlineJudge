#include <stdio.h>
#include <string.h>

int main() {
	char line[241];
	int i, size, digit;
	while (gets(line)) {
		size = strlen(line);
		if (line[0] >= '0' && line[0] <= '9') {
			i = size - 1;
			while (i >= 0) {
				digit = 0;
				while (i >= 0 && digit < 32) {
					digit = 10 * digit + (line[i] - '0');
					i--;
				}
				printf("%c", digit);
			}
		} else {
			for (i = size - 1; i >= 0; i--) {
				digit = line[i];
				while (digit) {
					printf("%d", (digit % 10));
					digit /= 10;
				}
			}
		}
		printf("\n");
	}
}
