#include <stdio.h>

int main() {
	int n, num;
	long int ans;
	scanf("%d", &n);
	for (; n; n--) {
		scanf("%d", &num);
		ans = ((((num * 63) + 7492) * 5) - 498) / 10;
		if (ans < 0)
			ans *= -1;
		printf("%d\n", ans % 10);
	}
}
