#include <cstdio>

int main() {
	int n, k, a[101][101];
	for(int i = 0; i <= 100; i++)
		a[i][1] = 1, a[1][i] = i;
	for(int i = 2; i <= 100; i++)
		for(int j = 2; j <= 100; j++)
			a[i][j] = (a[i-1][j] + a[i][j-1]) % 1000000;
	while(scanf("%d%d", &n, &k) && n)
		printf("%d\n", a[n][k]);
}
