#include <stdio.h>
#include <string.h>

char inOrder[27], preOrder[27];

void posTree(int in, int pre, int size) {
	if (size) {
		char root = preOrder[pre];
		for (int i = 0; i < size; i++)
			if (inOrder[in + i] == root) {
				posTree(in, pre + 1, i);
				posTree(in + i + 1, pre + i + 1, size - (i + 1));
				putchar(root);
				return;
			}
	}
}

int main() {
	while (scanf("%s%s", preOrder, inOrder) == 2) {
		posTree(0, 0, strlen(inOrder));
		putchar('\n');
	}
}
