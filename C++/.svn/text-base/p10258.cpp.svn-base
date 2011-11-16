#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUM_CARDS = 52;

void outCard(int* card) {
	int value, kind;
	for (int i = 1; i <= NUM_CARDS; i++) {
		value = (card[i] - 1) % 13;
		if (value == 0) {
			printf("2");
		} else if (value == 1) {
			printf("3");
		} else if (value == 2) {
			printf("4");
		} else if (value == 3) {
			printf("5");
		} else if (value == 4) {
			printf("6");
		} else if (value == 5) {
			printf("7");
		} else if (value == 6) {
			printf("8");
		} else if (value == 7) {
			printf("9");
		} else if (value == 8) {
			printf("10");
		} else if (value == 9) {
			printf("Jack");
		} else if (value == 10) {
			printf("Queen");
		} else if (value == 11) {
			printf("King");
		} else if (value == 12) {
			printf("Ace");
		}
		kind = (card[i] - 1) / 13;
		if (kind == 0)
			printf(" of Clubs\n");
		else if (kind == 1)
			printf(" of Diamonds\n");
		else if (kind == 2)
			printf(" of Hearts\n");
		else if (kind == 3)
			printf(" of Spades\n");
	}
}

int main() {
	int card[NUM_CARDS + 1], temp[NUM_CARDS + 1], n, m, i, j;
	int shuffle[101][NUM_CARDS + 1];
	char num[10];
	scanf("%d", &n);
	gets(num);
	gets(num);
	for (; n; n--) {
		gets(num);
		m = atoi(num);
		for (i = 1; i <= NUM_CARDS; i++)
			card[i] = i;
		for (i = 1; i <= m; i++)
			for (j = 1; j <= NUM_CARDS; j++)
				scanf("%d", &shuffle[i][j]);
		gets(num);
		while (gets(num) && strcmp(num, "")) {
			j = atoi(num);
			for (i = 1; i <= NUM_CARDS; i++)
				temp[i] = card[i];
			for (i = 1; i <= NUM_CARDS; i++)
				card[i] = temp[shuffle[j][i]];
		}
		outCard(card);
		if (n != 1)
			printf("\n");
	}
}
