#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

const char* changeNumberBase(char* num, int baseA, int baseB) {
	long value = 0, fator = 1;
	int i = 0;
	for (i = strlen(num) - 1; i >= 0; i--) {
		value += fator * (num[i] >= 'A' && num[i] <= 'F' ? num[i] - 'A' + 10 : num[i] - '0');
		fator *= baseA;
	}
	i = 0;
	do {
		num[i++] = (value % baseB >= 10 ? 'A' + value % baseB - 10 : value % baseB + '0');
		value /= baseB;
	} while (value);
	num[i] = '\0';
	reverse(num, num + strlen(num));
	return strlen(num) > 7 ? "ERROR" : num;
}

int main() {
	char num[50];
	int a, b, base, len;
	while (scanf("%s%d%d", num, &a, &b) == 3) {
		printf("%7s\n", changeNumberBase(num, a, b));
	}
}
