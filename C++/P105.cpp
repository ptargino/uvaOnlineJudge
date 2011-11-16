#include <iostream>

using namespace std;

int main(void) {
	int l, h, r;
	int building[20001];
	for (int i = 0; i < 20001; i++) {
		building[i] = 0;
	}

	while (cin >> l >> h >> r) {
		for (int i = l; i < r; i++) {
			if (building[i + 10000] < h)
				building[i + 10000] = h;
		}
	}
	int i = -10000;
	int index = -10000;
	while (i < 10001 && building[index + 10000] == building[i + 10000])
		i++;
	index = i;
	cout << (index) << " " << building[(index + 10000)];
	while (true) {
		while (i < 10001 && building[index + 10000] == building[i + 10000])
			i++;
		if (i == 10001)
			break;
		index = i;
		cout << " " << (index) << " " << building[(index + 10000)];
	}
	cout << endl;
}
