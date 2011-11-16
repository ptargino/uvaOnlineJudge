#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char line[10];
	int max, min, num;
	while (gets(line) && strcmp(line, "0")) {
		max = 11, min = 0;
		num = atoi(line);
		while (gets(line) && strcmp(line, "right on")) {
			if (strcmp(line, "too high") == 0) {
				if (num < max)
					max = num;
			} else if (num > min)
				min = num;
			gets(line);
			num = atoi(line);
		}
		if (num > min && num < max)
			printf("Stan may be honest\n");
		else
			printf("Stan is dishonest\n");
	}
}
