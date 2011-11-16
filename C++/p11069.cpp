#include <stdio.h>

int main() {
	long ans[77];
	int i;
	ans[0] = ans[1] = 1;
	ans[2] = 2;
	for (i = 3; i < 77; i++)
		ans[i] = ans[i - 2] + ans[i - 3];
	while (scanf("%d", &i) == 1)
		printf("%ld\n", ans[i]);
}
