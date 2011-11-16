#include <iostream>

using namespace std;

long int selfNumber(long int i) {
	long int total = i;
	while (i > 0) {
		total += i % 10;
		i /= 10;
	}
	return total;
}

int main() {
	long int i, index, ans[97787], j = 0;
	bool *self = new bool[1000001];
	memset(self, false, 1000001);
	for (i = 1; i <= 1000000; i++) {
		if (!self[i])
			ans[j++] = i;
		index = selfNumber(i);
		if (index <= 1000000)
			self[index] = true;
	}
	for (i = 0; i < j; i++)
		printf("%ld\n", ans[i]);
}
