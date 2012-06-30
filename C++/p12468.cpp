#include <cstdio>

#define min(a, b) (a) < (b) ? (a) : (b)

int abs(int a) {
	return a > 0 ? a: -a; 
}

int main() {
	int a, b;
	while(scanf("%d%d", &a, &b) && a != -1)
		printf("%d\n", min(abs(a-b), 100 - abs(a-b)));
}
