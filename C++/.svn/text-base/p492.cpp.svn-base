#include <stdio.h>

bool isVowel(char ch) {
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

bool isLetter(char ch) {
	return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z');
}

char buffer[10000];
int i = 0;
void solve(char ch) {
	buffer[i++] = ch;
	if (i >= 9999) {
		buffer[i++] = '\0';
		printf("%s", buffer);
		i = 0;
	}
}

int main() {
	char c, first;
	bool word = false;
	c = getchar();
	while (c != EOF) {
		if (word) {
			if (isLetter(c))
				solve(c);
			else {
				word = false;
				if (!isVowel(first))
					solve(first);
				solve('a');
				solve('y');
				solve(c);
			}
		} else {
			if (isLetter(c)) {
				word = true;
				first = c;
				if (isVowel(first))
					solve(first);
			} else
				solve(c);
		}
		c = getchar();
	}
	if (word) {
		word = false;
		if (!isVowel(first))
			solve(first);
		solve('a');
		solve('y');
		solve(c);
	}
	buffer[i++] = '\0';
	printf("%s", buffer);
}
