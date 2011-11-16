#include <iostream>

using namespace std;

long int numCycles(long int n){
	if (n == 1)
		return 1;
	return 1 + numCycles(n % 2 != 0 ? 3 * n + 1 : n / 2);
}

int main(){
	long int a, b, n, i, cycles, maxCycles, min, max;
	while(scanf("%ld%ld", &a, &b) == 2){
		min = (a < b) ? a : b;
		max = (a > b) ? a : b;
		maxCycles = 0;
		for (i = min; i <= max; i++) {
			cycles = numCycles(i);
			if (cycles > maxCycles)
				maxCycles = cycles;
		}
		printf("%ld %ld %ld\n", a, b, maxCycles);		
	}
}

