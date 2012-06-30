#include <algorithm>
#include <iostream>

using namespace std;

const int CONVERSION = 'a' - 'A';

char toLower(char ch) {
	return (ch >= 'a' && ch <= 'z') ? ch : ch + CONVERSION;
}

bool charcmp(char a, char b) {
	return toLower(a) == toLower(b) ? a < b : toLower(a) < toLower(b);
}

int main() {
	char line[101];
	int n, length;
	scanf("%d", &n);
	string out = "";
	for (; n; n--) {
		scanf("%s", &line);
		length = strlen(line);
		sort(line, line + length, charcmp);
		do {
			out.append(line);
			out.append("\n");
		} while (next_permutation(line, line + length, charcmp));
	}
	cout << out;
}
