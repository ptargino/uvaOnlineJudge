#include <iostream>

using namespace std;

int main() {

	long long catalan[27], bracketing[27], ans[27];
	int i, j, n;
	catalan[0] = 1;
	for (i = 0; i < 26; i++) {
		catalan[i + 1] = (2 * (2 * i + 1)) * catalan[i] / (i + 2);
	}

	bracketing[1] = 1;
	bracketing[2] = 1;
	for (i = 3; i <= 26; i++)
		bracketing[i] = (3 * (2 * i - 3) * bracketing[i - 1] - (i - 3)
				* bracketing[i - 2]) / i;

	ans[0] = ans[1] = ans[2] = 0;
	for (i = 3; i <= 26; i++)
		ans[i] = bracketing[i] - catalan[i - 1];

	while (scanf("%d", &n) == 1)
		cout << ans[n] << endl;

}
