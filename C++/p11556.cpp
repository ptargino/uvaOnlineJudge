#include <stdio.h>

int main() {
	long long num, ans = 1;
	int exp;
	while (scanf("%lld%d", &num, &exp) == 2)
		if (num < ans << (exp + 1))
			printf("yes\n");
		else
			printf("no\n");

}
