#include <iostream>

using namespace std;

int main() {
	char* a = new char[1000001];
	int* change = new int[1000000];
	long i, j, n, count;
	int numCase = 1;
	string out;
	while (scanf("%s", a) == 1) {
		out = "";
		count = 0;
		change[0] = 0;
		for (i = 1; a[i] != '\0'; i++) {
			if (a[i] != a[i - 1])
				count++;
			change[i] = count;
		}
		scanf("%ld", &n);
		printf("Case %d:\n", numCase);
		for (; n; n--) {
			scanf("%ld%ld", &i, &j);
			out += change[i] == change[j] ? "Yes\n" : "No\n";
		}
		cout << out;
		numCase++;
	}

}
