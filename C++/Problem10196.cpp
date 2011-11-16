#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char table[8][9];
bool isEmpty() {
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (table[i][j] != '.')
				return false;
	return true;
}

bool whitePawn(int i, int j, int x, int y) {
	return (i - x == 1 && abs(j - y) == 1);
}

bool blackPawn(int i, int j, int x, int y) {
	return (x - i == 1 && abs(j - y) == 1);
}

bool rook(int i, int j, int x, int y) {
	if (i != x && j != y)
		return false;
	int a;
	if (i == x) {
		if (j < y) {
			for (a = j + 1; a < y; a++)
				if (table[i][a] != '.')
					return false;
		} else {
			for (a = y + 1; a < j; a++)
				if (table[i][a] != '.')
					return false;
		}
	} else {
		if (i < x) {
			for (a = i + 1; a < x; a++)
				if (table[a][j] != '.')
					return false;
		} else {
			for (a = x + 1; a < i; a++)
				if (table[a][j] != '.')
					return false;
		}
	}
	return true;
}

bool bishop(int i, int j, int x, int y) {
	if (abs(i - x) != abs(j - y))
		return false;
	int a, b;
	if (i < x) {
		if (j < y) {
			for (a = i + 1, b = j + 1; a < x && b < y; a++, b++)
				if (table[a][b] != '.')
					return false;
		} else {
			for (a = i + 1, b = j - 1; a < x && b > y; a++, b--)
				if (table[a][b] != '.')
					return false;
		}
	} else {
		if (j < y) {
			for (a = i - 1, b = j + 1; a > x && b < y; a--, b++)
				if (table[a][b] != '.')
					return false;
		} else {
			for (a = i - 1, b = j - 1; a > x && b > y; a--, b--)
				if (table[a][b] != '.')
					return false;
		}
	}
	return true;
}

bool knight(int i, int j, int x, int y) {
	return (abs(i - x) == 2 && abs(j - y) == 1) || (abs(i - x) == 1 && abs(j - y) == 2);
}

bool queen(int i, int j, int x, int y) {
	return rook(i, j, x, y) || bishop(i, j, x, y);
}

bool king(int i, int j, int x, int y) {
	return abs(i - x) <= 1 && abs(j - y) <= 1;
}

bool whiteCheck() {
	int x, y;
	for (x = 0; x < 8; x++) {
		for (y = 0; y < 8; y++)
			if (table[x][y] == 'K')
				break;
		if (table[x][y] == 'K')
			break;
	}

	int i, j;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			if (table[i][j] == 'p' && blackPawn(i, j, x, y))
				return true;
			else if (table[i][j] == 'n' && knight(i, j, x, y))
				return true;
			else if (table[i][j] == 'b' && bishop(i, j, x, y))
				return true;
			else if (table[i][j] == 'r' && rook(i, j, x, y))
				return true;
			else if (table[i][j] == 'q' && queen(i, j, x, y))
				return true;
			else if (table[i][j] == 'k' && king(i, j, x, y))
				return true;
	return false;
}

bool blackCheck() {
	int x, y;
	for (x = 0; x < 8; x++) {
		for (y = 0; y < 8; y++)
			if (table[x][y] == 'k')
				break;
		if (table[x][y] == 'k')
			break;
	}

	int i, j;
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			if (table[i][j] == 'P' && whitePawn(i, j, x, y))
				return true;
			else if (table[i][j] == 'N' && knight(i, j, x, y))
				return true;
			else if (table[i][j] == 'B' && bishop(i, j, x, y))
				return true;
			else if (table[i][j] == 'R' && rook(i, j, x, y))
				return true;
			else if (table[i][j] == 'Q' && queen(i, j, x, y))
				return true;
			else if (table[i][j] == 'K' && king(i, j, x, y))
				return true;
	return false;
}

int main() {
	int i, count = 1;
	while (true) {
		for (i = 0; i < 8; i++)
			gets(table[i]);
		if (isEmpty())
			break;
		if (whiteCheck())
			printf("Game #%d: white king is in check.\n", count++);
		else if (blackCheck())
			printf("Game #%d: black king is in check.\n", count++);
		else
			printf("Game #%d: no king is in check.\n", count++);
		gets(table[0]);
	}
}
