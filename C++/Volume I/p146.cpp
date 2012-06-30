#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char line[51];
	int length;
	while (strcmp(gets(line), "#")) {
		length = strlen(line);
		if (next_permutation(line, line + length))
			cout << line << endl;
		else
			printf("No Successor\n");
	}
}
