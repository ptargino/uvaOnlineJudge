#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 2) {
			cout << "00\n" << "01\n" << "81" << endl;
		} else if (n == 4) {
			cout << "0000\n" << "0001\n" << "2025\n" << "3025\n" << "9801"
					<< endl;
		} else if (n == 6) {
			cout << "000000\n" << "000001\n" << "088209\n" << "494209\n"
					<< "998001" << endl;
		} else {
			cout << "00000000\n" << "00000001\n" << "04941729\n"
					<< "07441984\n" << "24502500\n" << "25502500\n"
					<< "52881984\n" << "60481729\n" << "99980001" << endl;
		}
	}
	return 0;
}
