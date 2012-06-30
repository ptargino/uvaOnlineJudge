#include <stdio.h>
#include <math.h>

bool isPrime(int n) {
	if (n == 1)
		return false;
	if (n % 2 == 0)
		return (n == 2);
	int root = (int) sqrt(n);
	for (int i = 3; i <= root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int main() {
	char line[2001], out[2001];
	int frequency[128];
	int numCase = 1, i, j, k, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%s", line);
		for (j = 0; j < 128; j++)
			frequency[j] = 0;
		for (j = 0; line[j] != '\0'; j++)
			frequency[line[j]]++;
		k = 0;
		for (j = 0; j < 128; j++)
			if (isPrime(frequency[j]))
				out[k++] = j;
		out[k] = '\0';
		printf("Case %d: %s\n", numCase++, k ? out : "empty");
	}
}
