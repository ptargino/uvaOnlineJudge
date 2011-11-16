#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getline() {
	char* line = new char[101];
	do {
		gets(line);
	} while (line[0] == '\0');
	return line;
}

int main() {
	char* line = new char[101];
	char ch;
	int numCase = 1, numLines, i, len;
	while (numLines = atoi(getline())) {
		printf("Case %d:\n", numCase++);
		printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
		while (numLines--) {
			line = getline();
			printf("printf(\"");
			for (i = 0; line[i] != '\0'; i++) {
				if (line[i] == '\\' || line[i] == '\"')
					putchar('\\');
				putchar(line[i]);
			}
			printf("\\n\");\n");
		}
		printf("printf(\"\\n\");\nreturn 0;\n}\n");
	}
}
