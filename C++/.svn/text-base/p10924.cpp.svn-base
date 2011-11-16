#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(int n) {
	if (n % 2 == 0)
		return (n == 2);
	int root = (int) sqrt(n);
	for (int i = 3; i <= root; i += 2)
		if (!(n % i))
			return false;
	return true;
}

int main() {
	char line[21];
	int sum, i;
	while (gets(line)) {
		sum = 0;
		for (i = 0; line[i] != '\0'; i++)
			if (line[i] >= 'a' && line[i] <= 'z')
				sum += line[i] - 'a' + 1;
			else
				sum += line[i] - 'A' + 27;
		printf(isPrime(sum) ? "It is a prime word.\n"
				: "It is not a prime word.\n");

	}

}
