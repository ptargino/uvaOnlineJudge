#include <iostream>

using namespace std;

int main() {
	long num, factor, count, n;
	while (cin >> n && n) {
		num = n;
		count = 0;
		factor = 2;
		if (n == 1)
			count = 1;
		else {
			while (factor <= n / 2 && num != 1) {
				if (num % factor == 0) {
					count++;
					while (num % factor == 0)
						num /= factor;
				}
				factor++;
			}
			if(n == num)
				count++;
		}
		cout << n << " : " << count << endl;
	}

}
