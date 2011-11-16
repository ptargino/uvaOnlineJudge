#include <stdio.h>

using namespace std;

int main() {
	bool days[3651];
	int n, i, j, hartal, numDays, numHartals, day, count;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &numDays);
		for (j = 1; j <= numDays; j++)
			days[j] = false;
		scanf("%d", &numHartals);
		for (j = 0; j < numHartals; j++) {
			scanf("%d", &hartal);
			day = hartal;
			while (day <= numDays) {
				if (day % 7 != 6 && day % 7 != 0)
					days[day] = true;
				day += hartal;
			}
		}
		count = 0;
		for (j = 1; j <= numDays; j++)
			if(days[j])
				count++;
		printf("%d\n",count);
	}
}
