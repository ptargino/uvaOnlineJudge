#include <stdio.h>
#include <string.h>

char word[1000];

bool isPalindrome(int t) {
	int size = t - 1;
	int n = t / 2;
	for (int i = 0; i < n; i++)
		if (word[i] != word[size - i])
			return false;
	return true;
}

int main() {
	char line[1000], c;
	int i, j;
	while (gets(line) && strcmp(line, "DONE")) {
		for (i = j = 0; line[i] != '\0'; i++) {
			c = line[i];
			if (c >= 'a' && c <= 'z')
				word[j++] = c;
			else if (c >= 'A' && c <= 'Z')
				word[j++] = c - 'A' + 'a';
		}
		printf(isPalindrome(j) ? "You won't be eaten!\n" : "Uh oh..\n");
	}
}
