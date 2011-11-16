#include <stdio.h>
#include <string.h>

long convert(char* word) {
	long ans = 0;
	for (int i = 0; word[i] != '\0'; i++)
		ans = (ans << 1) + (word[i] - '0');
	return ans;
}

int main() {
	char word[50], out[50];
	bool flag;
	int i, j, len;
	while (scanf("%s", word) && strcmp(word, "~")) {
		i = 0;
		do {
			len = strlen(word);
			if (len == 1)
				flag = true;
			else if (len == 2)
				flag = false;
			else if (flag)
				for (len -= 2; len; len--)
					out[i++] = '1';
			else
				for (len -= 2; len; len--)
					out[i++] = '0';
			out[i] = '\0';
		} while (scanf("%s", word) && strcmp(word, "#"));
		printf("%ld\n", convert(out));
	}
}
