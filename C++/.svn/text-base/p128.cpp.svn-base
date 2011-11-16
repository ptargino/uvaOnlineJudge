#include <stdio.h>

int main() {
	unsigned long mod;
	int i;
	char s[1025];
	while (gets(s) && s[0] != '#') {
		i = mod = 0;
		do
			mod = ((mod + s[i]) << 8) % 34943;
		while (s[i++] != '\0');
		mod = (34943 - mod) % 34943;
		printf("%.2lX %.2lX\n", mod >> 8, mod % (1 << 8));
	}
}
