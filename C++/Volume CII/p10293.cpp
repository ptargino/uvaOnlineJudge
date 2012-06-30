#include <iostream>

using namespace std;

int main() {
	char line[81], ch;
	int frequency[31], i, length;
	for (i = 0; i < 31; i++)
		frequency[i] = 0;
	while (gets(line)) {
		if (strcmp(line, "#") == 0) {
			for (i = 1; i < 31; i++) {
				if (frequency[i])
					printf("%d %d\n", i, frequency[i]);
				frequency[i] = 0;
			}
			printf("\n");
		} else {
			length = 0;
			for (i = 0; line[i] != '\0'; i++) {
				ch = line[i];
				if (ch == ' ' || ch == '?' || ch == '!' || ch == '.' || ch
						== ',') {
					if (length) {
						frequency[length]++;
						printf("%d\n", length);
					}
					length = 0;
				} else {
					length++;
				}
			}
			if (length) {
				frequency[length]++;
				printf("%d\n", length);
			}
			printf("linha\n");
		}
	}

}
