#include <stdio.h>
#include <string.h>

char line[13], cubeA[7], cubeB[7];

void rotate(int a, int b, int c, int d) {
	char temp;
	temp = cubeB[a];
	cubeB[a] = cubeB[b];
	cubeB[b] = cubeB[c];
	cubeB[c] = cubeB[d];
	cubeB[d] = temp;
}

void rotateX() {
	rotate(0, 1, 5, 4);
}

void rotateY() {
	rotate(1, 2, 4, 3);
}

void rotateZ() {
	rotate(0, 3, 5, 2);
}

bool equals() {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (strcmp(cubeA, cubeB) == 0)
				return true;
			rotateZ();
		}
		rotateX();
	}
	rotateY();
	for (j = 0; j < 4; j++) {
		if (strcmp(cubeA, cubeB) == 0)
			return true;
		rotateZ();
	}
	rotateY();
	rotateY();
	for (j = 0; j < 4; j++) {
		if (strcmp(cubeA, cubeB) == 0)
			return true;
		rotateZ();
	}
	return false;
}

int main() {
	int i, j, k;
	while (scanf("%s", &line) == 1) {
		for (i = 0; i < 6; i++) {
			cubeA[i] = line[i];
			cubeB[i] = line[6 + i];
		}
		cubeA[6] = '\0';
		cubeB[6] = '\0';
		printf(equals() ? "TRUE\n" : "FALSE\n");
	}
}
