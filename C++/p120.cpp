#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int aux[30];

void flip(int n) {
	int temp;
	for (int i = 0; i <= n/2; i++) {
		temp = aux[i];
		aux[i] = aux[n - i];
		aux[n - i] = temp;
	}
}

int indexOf(int num) {
	int i = 0;
	while (aux[i] != num)
		i++;
	return i;
}

char *buffer = new char[1001];
int i = 0;
bool nextWord(char* token) {
	if (buffer[i] == '\0') {
		i = 0;
		return false;
	}
	int j = 0;
	while (buffer[i] != '\0' && buffer[i] != ' ')
		token[j++] = buffer[i++];
	token[j++] = '\0';
	if (buffer[i] == ' ')
		i++;
	return true;
}

int main() {
	char *word = new char[20];
	int sorted[30], n, i, j;
	while (gets(buffer)) {
		n = 0;
		while (nextWord(word)) {
			printf("%s ", word);
			sorted[n] = aux[n] = atoi(word);
			n++;
		}
		printf("\n");
		sort(sorted, sorted + n);
		for (i = n-1; i >= 0; i--)
			if (aux[i] != sorted[i]) {
				j = indexOf(sorted[i]);
				if (j != 0) {
					flip(j);
					printf("%d ", n - j);
				}
				flip(i);
				printf("%d ", n - i);
			}
		printf("0\n");
	}
}
