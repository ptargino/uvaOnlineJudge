#include <iostream>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int price[n];
		for (int i = 0; i < n; i++)
			cin >> price[i];
		int priceA = 0, priceB = 0;
		int m;
		cin >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < i; j++)
				if (price[j] + price[i] == m && ((priceA == 0 && priceB == 0) || (price[i] - price[j] < priceB - priceA))) {
					priceA = price[j];
					priceB = price[i];
				}
		cout << "Peter should buy books whose prices are " << priceA << " and "
				<< priceB << "." << endl << endl;
	}

}

