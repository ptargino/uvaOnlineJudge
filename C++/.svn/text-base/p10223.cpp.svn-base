#include <iostream>

using namespace std;

int main() {
	long long num[19] = { 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786,
			208012, 742900, 2674440, 9694845, 35357670, 129644790, 477638700,
			1767263190 };
	unsigned long long n;
	int i;
	while (cin >> n) {
		i = 0;
		while (num[i] < n)
			i++;
		if (num[i] == n)
			printf("%d\n", i + 1);
	}
}
