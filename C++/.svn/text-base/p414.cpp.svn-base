#include <iostream>

int main() {
	char image[26];
	int n, size, minLength, i, j, empty;
	while (scanf("%d", &n) && n) {
		gets(image);
		minLength = 26;
		empty = 0;
		for (j = 0; j < n; j++) {
			gets(image);
			size = 0;
			for (i = 0; i < 25; i++)
				if (image[i] == ' ')
					size++;
			empty += size;
			if (size < minLength)
				minLength = size;
		}
		empty -= (n * minLength);
		printf("%d\n", empty);
	}
}
