#include <stdio.h>
#include <math.h>

using namespace std;

int gcd(int m, int n) {
	return (m % n) ? gcd(n, m % n) : n;
}

int main() {
	int i, j, total, count, num[50];
	while (scanf("%d", &total) && total) {
		count = 0;
		for (i = 0; i < total; i++)
			scanf("%d", &num[i]);
		for (i = 0; i < total; i++)
			for (j = 0; j < i; j++)
				if (gcd(num[i], num[j]) == 1)
					count++;
		if (count)
			printf("%6lf\n", sqrt((6.0 / count) * ((total * (total - 1)) / 2)));
		else
			printf("No estimate for this data set.\n");
	}
}
