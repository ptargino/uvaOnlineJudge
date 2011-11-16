#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	long ram[10];
	int n, i;
	char instr[10];
	gets(instr);
	n = atoi(instr);
	for (; n; n--) {
		for (i = 0; i < 10; i++)
			ram[i] = 0;
		gets(instr);
		while (gets(instr) && strlen(instr)) {
			switch (instr[0]) {
			case '1':
				;
			case '2':
				;
			case '3':
				;
			case '4':
				;
			case '5':
				;
			case '6':
				;
			case '7':
				;
			case '8':
				;
			case '9':
				;
			case '0':
				;
			}

		}
	}

}
