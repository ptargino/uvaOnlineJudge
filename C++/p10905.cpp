#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

struct number {
	char str[100];
};

bool isLess(number a, number b) {
	char x[200], y[200];
	strcpy(x, a.str);
	strcpy(y, b.str);
	strcat(x, b.str);
	strcat(y, a.str);
	for (int i = 0; x[i] != '\0'; i++)
		if (x[i] != y[i])
			return x[i] > y[i];
	return false;
}

int main() {
	number nums[50];
	int n, i;
	while (scanf("%d", &n) && n) {
		for (i = 0; i < n; i++)
			scanf("%s", nums[i].str);
		sort(nums, nums + n, isLess);
		for (i = 0; i < n; i++)
			printf("%s", nums[i].str);
		printf("\n");
	}
}
