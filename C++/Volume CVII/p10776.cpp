#include <iostream>

using namespace std;

char output[31], input[31];

void combination(int ouputSize, int inputStart, int inputEnd, int combinationSize) {
	if (combinationSize == 0) {
		output[ouputSize] = '\0';
		printf("%s\n", output);
	} else {
		output[ouputSize] = input[inputStart];
		combination(ouputSize + 1, inputStart + 1, inputEnd, combinationSize - 1);
		for (int i = inputStart + 1; i <= (inputEnd - combinationSize); i++)
			if (input[i] != input[i - 1]) {
				output[ouputSize] = input[i];
				combination(ouputSize + 1, i + 1, inputEnd, combinationSize - 1);
			}
	}
}

int main() {
	int n, size;
	while (scanf("%s%d", &input, &n) == 2) {
		size = strlen(input);
		sort(input, input + size);
		combination(0, 0, size, n);
	}
}
