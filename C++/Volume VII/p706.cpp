#include <stdio.h>

int main() {
	int digits[8], size, number, length, i, j, k;
	char ch1, ch2;
	while (scanf("%d %d", &size, &number) == 2 && (size || number)) {
		length = 0;
		digits[0] = 0;
		//Separa os digitos
		if (number) {
			for (i = 0; number > 0; i++) {
				digits[i] = number % 10;
				number /= 10;
				length++;
			}
			length--;
		}

		//Primeira linha
		for (i = length; i >= 0; i--) {
			ch1 = (digits[i] == 1 || digits[i] == 4) ? ' ' : '-';
			putchar(' ');
			for (k = 0; k < size; k++)
				putchar(ch1);
			putchar(' ');
			putchar((i ? ' ' : '\n'));
		}
		//Segunda linha
		for (j = 0; j < size; j++)
			for (i = length; i >= 0; i--) {
				ch1 = (digits[i] == 1 || digits[i] == 2 || digits[i] == 3 || digits[i] == 7) ? ' ' : '|';
				ch2 = (digits[i] != 5 && digits[i] != 6) ? '|' : ' ';
				putchar(ch1);
				for (k = 0; k < size; k++)
					putchar(' ');
				putchar(ch2);
				putchar((i ? ' ' : '\n'));
			}
		//Terceira linha
		for (i = length; i >= 0; i--) {
			ch1 = (digits[i] == 1 || digits[i] == 0 || digits[i] == 7) ? ' ': '-';
			putchar(' ');
			for (k = 0; k < size; k++)
				putchar(ch1);
			putchar(' ');
			putchar((i ? ' ' : '\n'));
		}

		//Quarta linha
		for (j = 0; j < size; j++) {
			for (i = length; i >= 0; i--) {
				ch1 = (digits[i] == 2 || digits[i] == 6 || digits[i] == 8 || digits[i] == 0) ? '|' : ' ';
				ch2 = (digits[i] == 2) ? ' ' : '|';
				putchar(ch1);
				for (k = 0; k < size; k++)
					putchar(' ');
				putchar(ch2);
				putchar((i ? ' ' : '\n'));
			}
		}
		//Quinta linha
		for (i = length; i >= 0; i--) {
			ch1 = (digits[i] == 1 || digits[i] == 4 || digits[i] == 7) ? ' ': '-';
			putchar(' ');
			for (k = 0; k < size; k++)
				putchar(ch1);
			putchar(' ');
			putchar((i ? ' ' : '\n'));
		}
		putchar('\n');
	}
}
