#include <stdio.h>
#include <string.h>

const int LINE_SIZE = 121;
const int NUM_LINES = 100;

char* numericString(char a[NUM_LINES][LINE_SIZE], int n) {
	int index = 0;
	char * out = new char[LINE_SIZE * NUM_LINES];
	for (int j = 0; j < n; j++)
		for (int i = 0; a[j][i] != '\0'; i++)
			if (a[j][i] >= '0' && a[j][i] <= '9')
				out[index++] = a[j][i];
	out[index] = '\0';
	return out;
}

int main() {
	char stdSolution[NUM_LINES][LINE_SIZE], teamSolution[NUM_LINES][LINE_SIZE];
	int n, m, i, count = 1;
	while (scanf("%d", &n) && n) {
		gets(stdSolution[0]);
		for (i = 0; i < n; i++) {
			gets(stdSolution[i]);
		}
		scanf("%d", &m);
		gets(teamSolution[0]);
		for (i = 0; i < m; i++)
			gets(teamSolution[i]);
		bool acc = true, presError = true;
		if (m != n)
			acc = false;
		else
			for (i = 0; i < n; i++)
				if (strcmp(stdSolution[i], teamSolution[i])) {
					acc = false;
					break;
				}
		if (strcmp(numericString(stdSolution, n),
				numericString(teamSolution, m))) {
			presError = false;
		}

		if (acc)
			printf("Run #%d: Accepted\n", count++);
		else if (presError)
			printf("Run #%d: Presentation Error\n", count++);
		else
			printf("Run #%d: Wrong Answer\n", count++);

	}
}
