#include <stdio.h>

int main() {
	char line[1001];
	int n, i, j, digit, qtde[10];
	bool sWin;
	scanf("%d", &n);
	for (j = 1; j <= n; j++) {
		for (i = 0; i < 10; i++)
			qtde[i] = 0;
		scanf("%s", line);
		for (i = 0; line[i] != '\0'; i++)
			qtde[line[i] - '0']++;
		digit = 0;
		for (i = 1; i < 10; i++)
			digit += i * qtde[i];
		digit %= 3;
		sWin = true;
		if (qtde[digit])
			qtde[digit]--;
		else if (qtde[digit + 3])
			qtde[digit + 3]--;
		else if (qtde[digit + 6])
			qtde[digit + 6]--;
		else if (digit == 0 && qtde[digit + 9])
			qtde[digit + 9]--;
		else
			sWin = false;
		if (sWin)
			sWin = ((qtde[3] + qtde[6] + qtde[9]) % 2) == 0;
		printf("Case %d: %c\n", j, (sWin ? 'S' : 'T'));
	}
}
