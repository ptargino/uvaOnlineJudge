#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(long int n) {
	int root = (int) sqrt(n);
	for (int i = 3; i < root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int main() {
	long int n, root, i, j, size;
	long int factors[32];
	bool *prime = new bool[65537];
	memset(prime, true, 65537);
	for(i = 3; i <= 256; i += 2)
		if(prime[i] && isPrime(i))
			for(j = 2 * i; j <= 65536; j += i)
				prime[j] = false;
	while (scanf("%ld", &n) && n) {
		printf("%ld = ", n);
		size = 0;
		if(n < 0){
			factors[size++] = -1;
			n *= -1;
		}
		while(n % 2 == 0){
			factors[size++] = 2;
			n /= 2;
		}
		root = (long int)sqrt(n);
		i = 3;
		while( i <= root && n != 1){
			if(prime[i])
				while(n % i == 0) {
					factors[size++] = i;
					n /= i;
				}
			i += 2;
		}
		if( n != 1 )
			factors[size++] = n;
		printf("%ld",factors[0]);
		for(i = 1; i < size; i++)
			printf(" x %ld",factors[i]);
	}
}
