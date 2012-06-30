#include <iostream>
#include <math.h>

using namespace std;

int main() {
	char line[100];
	int i, j, base;
	double num, sq;
	while (gets(line)) {
		if (line[0] == '0')
			break;
		base = 1;
		for (j = 0; line[j] != '\0'; j++)
			if (line[j] - '0' > base)
				base = line[j] - '0';
		for (i = base + 1; i < 100; i++) {
			num = 0.0;
			for (j = 0; line[j] != '\0'; j++) {
				num *= i;
				num += line[j] - '0';
			}
			sq = sqrt(num);
			if (sq - (int) sq < 0.000001)
				break;
		}
		printf("%d\n", i);
	}

}
