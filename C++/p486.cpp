#include <stdio.h>
#include <string.h>

long getValue(char* token) {
	if (strcmp(token, "one") == 0)		return 1;
	if (strcmp(token, "two") == 0)		return 2;
	if (strcmp(token, "three") == 0)	return 3;
	if (strcmp(token, "four") == 0)		return 4;
	if (strcmp(token, "five") == 0)		return 5;
	if (strcmp(token, "six") == 0)		return 6;
	if (strcmp(token, "seven") == 0)	return 7;
	if (strcmp(token, "eight") == 0)	return 8;
	if (strcmp(token, "nine") == 0)		return 9;
	if (strcmp(token, "ten") == 0)		return 10;
	if (strcmp(token, "eleven") == 0)	return 11;
	if (strcmp(token, "twelve") == 0)	return 12;
	if (strcmp(token, "thirteen") == 0)	return 13;
	if (strcmp(token, "fourteen") == 0)	return 14;
	if (strcmp(token, "fifteen") == 0)	return 15;
	if (strcmp(token, "sixteen") == 0)	return 16;
	if (strcmp(token, "seventeen") == 0)return 17;
	if (strcmp(token, "eighteen") == 0)	return 18;
	if (strcmp(token, "nineteen") == 0)	return 19;
	if (strcmp(token, "twenty") == 0)	return 20;
	if (strcmp(token, "thirty") == 0)	return 30;
	if (strcmp(token, "forty") == 0)	return 40;
	if (strcmp(token, "fifty") == 0)	return 50;
	if (strcmp(token, "sixty") == 0)	return 60;
	if (strcmp(token, "seventy") == 0)	return 70;
	if (strcmp(token, "eighty") == 0)	return 80;
	if (strcmp(token, "ninety") == 0)	return 90;
	if (strcmp(token, "hundred") == 0)	return 100;
	if (strcmp(token, "thousand") == 0)	return 1000;
	if (strcmp(token, "million") == 0) 	return 1000000;
	return 0;
}

char *buffer = new char[1001];
int i = 0;
bool nextWord(char* token) {
	if (buffer[i] == '\0')
		return false;
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
	while (gets(buffer)) {
		i = 0;
		bool negative = false;
		long total = 0, subtotal = 0, value;
		while (nextWord(word)) {
			if (strcmp("negative", word) == 0) {
				negative = true;
			} else {
				value = getValue(word);
				if (value == 100)
					subtotal *= 100;
				else if (value == 1000) {
					total += subtotal * 1000;
					subtotal = 0;
				} else if (value == 1000000) {
					total += subtotal * 1000000;
					subtotal = 0;
				} else
					subtotal += value;
			}
		}
		total += subtotal;
		if (negative)
			total *= -1;
		printf("%ld\n", total);
	}
}
