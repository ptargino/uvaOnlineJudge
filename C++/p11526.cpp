#include <iostream>
#include <math.h>

using namespace std;

long long H(long long n) {
	long root = (long) sqrt(n);
	long long sum = root;
	long long a;
	for (long i = 1; i < root; i++) {
		a = i * ((n / i) - (n / (i + 1)));
		sum += a;
		a = n / i;
		sum += n / i;
	}
	return sum;
}

int main() {
	long long n, sq;
	int t;
	cin >> t;
	for (; t; t--) {
		cin >> n;
		cout << H(n) << endl;
	}

}
