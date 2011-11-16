#include <iostream>

using namespace std;

int frequency[128][2];

bool cmp(int a[2], int b[2]) {
	if (a[1] == b[1])
		return a[0] > b[0];
	return a[1] < b[1];
}

void sort() {
	int i, j;
	int temp;
	for (i = 0; i < 128; i++)
		for (j = 0; j < i; j++)
			if (cmp(frequency[i], frequency[j])) {
				temp = frequency[i][0];
				frequency[i][0] = frequency[j][0];
				frequency[j][0] = temp;
				temp = frequency[i][1];
				frequency[i][1] = frequency[j][1];
				frequency[j][1] = temp;
			}
}

int main() {
	int i;
	char line[1001];
	gets(line);
	while (true) {
		for (i = 0; i < 128; i++) {
			frequency[i][0] = i;
			frequency[i][1] = 0;
		}
		for (i = 0; line[i] != '\0'; i++) {
			int j = line[i];
			frequency[j][1]++;
		}
		sort();
		for (i = 0; i < 128; i++)
			if (frequency[i][1])
				printf("%d %d\n", frequency[i][0], frequency[i][1]);
		if (gets(line))
			printf("\n");
		else
			break;
	}

}
