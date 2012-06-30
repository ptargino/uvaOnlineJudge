#include <iostream>

using namespace std;

int main() {
	int *num = new int[100000], *times = new int[100000], n;
	long int count = 0, i;
	while (scanf("%d", &n) == 1) {
		i = 0;
		while (i < count && num[i] != n)
			i++;
		if (i == count) {
			num[i] = n;
			count++;
			times[i] = 1;
		} else
			times[i]++;
	}

	for (i = 0; i < count; i++)
		printf("%d %d\n", num[i], times[i]);

}
