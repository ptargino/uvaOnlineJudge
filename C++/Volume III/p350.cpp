#include <iostream>

using namespace std;

int main() {
	bool *num = new bool[10000];
	long z, i, m, l, count, numCase = 1;
	while (scanf("%ld%ld%ld%ld", &z, &i, &m, &l) == 4 && z && i && m && l) {
		memset(num, false, m);
		count = 0;
		l %= m;
		while (true) {
			l = (z * l + i) % m;
			if (num[l])
				break;
			num[l] = true;
			count++;
		}
		printf("Case %ld: %ld\n", numCase++, count);
	}
}
