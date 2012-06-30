#include <iostream>

using namespace std;

int array[10000];
int n = 0;

void sort() {
	int temp;
	for (int i = n - 1; i > 0; i--) {
		if (array[i] < array[i - 1]) {
			temp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = temp;
		} else {
			return;
		}
	}
}

int main() {
	int number;
	while (cin >> number) {
		array[n++] = number;
		sort();
		cout << (n % 2 == 1 ? array[(n - 1) / 2] : ((array[n / 2] + array[n / 2
				- 1]) / 2)) << endl;
	}
}
