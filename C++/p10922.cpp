#include <math.h>
#include <iostream>

using namespace std;

int main() {
	char num[1001];
	int i, sum, temp, degree;
	while (strcmp(gets(num), "0")) {
		sum = 0;
		for (i = 0; num[i] != '\0'; i++)
			sum += num[i] - '0';
		if (sum % 9)
			printf("%s is not a multiple of 9.\n", num);
		else {
			degree = 1;
			while (sum != 9) {
				temp = 0;
				while (sum) {
					temp += sum % 10;
					sum /= 10;
				}
				sum = temp;
				degree++;
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n", num, degree);
		}
	}
}
