#include <stdio.h>
#include <string.h>

int main() {
	const int WORD_SIZE = 257;
	char a[144][WORD_SIZE], line[WORD_SIZE];
	int n, i, j;
	scanf("%d", &n);
	gets(line);
	gets(line);
	for (int t = 0; t < n; t++) {
		if (t)
			printf("\n");
		int totalSize = 0, size = 0;
		while (gets(line) && line[0] != '\0') {
			strcpy(a[size++], line);
			totalSize += strlen(line);
		}
		int wordSize = (totalSize * 2) / size, solutionSize = 0, lenSolution = strlen(a[0]);
		char solution[4][WORD_SIZE], firstSol[WORD_SIZE], partSol[4][WORD_SIZE];
		strcpy(firstSol, a[0]);
		for (i = 1; i < size; i++)
			if (lenSolution + strlen(a[i]) == wordSize) {
				strcpy(solution[solutionSize], firstSol);
				strcat(solution[solutionSize++], a[i]);
				strcpy(solution[solutionSize], a[i]);
				strcat(solution[solutionSize++], firstSol);
			}
		int partSolLen, partSolSize = 0, start = 0;
		char firstPartSol[WORD_SIZE] = "";
		for (i = 1; i < size; i++) {
			int len = strlen(a[i]);
			if (len != lenSolution && len != (wordSize - lenSolution)) {
				start = i;
				partSolLen = len;
				strcpy(firstPartSol, a[i]);
				break;
			}
		}
		if (firstPartSol[0] == '\0') {
			puts(solution[0]);
		} else {
			for (i = start + 1; i < size; i++)
				if (partSolLen + strlen(a[i]) == wordSize) {
					strcpy(partSol[partSolSize], firstPartSol);
					strcat(partSol[partSolSize++], a[i]);
					strcpy(partSol[partSolSize], a[i]);
					strcat(partSol[partSolSize++], firstPartSol);
				}
			bool found = false;
			for (i = 0; i < solutionSize && !found; i++)
				for (j = 0; j < partSolSize && !found; j++)
					if (strcmp(solution[i], partSol[j]) == 0)
						found = true, puts(solution[i]);
		}
	}
}
