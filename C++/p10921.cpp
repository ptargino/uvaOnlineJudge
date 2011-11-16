#include <stdio.h>

using namespace std;

int main() {
	char line[31];
	while (gets(line)) {
		for (int i = 0; line[i] != '\0'; i++)
			if (line[i] != '1' && line[i] != '0' && line[i] != '-')
				if (line[i] <= 'C')
					line[i] = '2';
				else if (line[i] <= 'F')
					line[i] = '3';
				else if (line[i] <= 'I')
					line[i] = '4';
				else if (line[i] <= 'L')
					line[i] = '5';
				else if (line[i] <= 'O')
					line[i] = '6';
				else if (line[i] <= 'S')
					line[i] = '7';
				else if (line[i] <= 'V')
					line[i] = '8';
				else
					line[i] = '9';
		printf("%s\n", line);
	}
}
