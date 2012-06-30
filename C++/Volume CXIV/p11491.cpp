#include <stdio.h>

int main() {
	char num[100001], buffer[100001];
	long size, d, i, atual, next, j;
	while (scanf("%d%d", &size, &d) == 2 && size && d) {
		scanf("%s", num);
		j = atual = 0;
		next = 1;
		num[size] = '9' + 1;
		while (d && atual < size) {
			while (d && num[atual] < num[next]) {
				if (num[atual]) {
					num[atual] = 0;
					d--;
				}
				if (atual)
					atual--;
				else
					break;
			}
			atual = next;
			next = atual + 1;
		}
		for (i = 0; i < size; i++)
			if (num[i])
				buffer[j++] = num[i];
		buffer[j] = '\0';
		puts(buffer);
	}
}
