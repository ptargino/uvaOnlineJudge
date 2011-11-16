#include <stdio.h>
#include <string.h>

int main() {
	const int SIZE = 481;
	int n, i, j, max, time, maxStartTime, startTime, count = 1, h1, m1, h2, m2, start, end;
	bool a[SIZE];
	char line[1000];
	while (scanf("%d", &n) == 1) {
		memset(a, true, SIZE);
		a[0] = false;
		for (i = 0; i < n; i++) {
			scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
			start = (h1 - 10) * 60 + m1;
			end = (h2 - 10) * 60 + m2;
			for (j = start + 1; j <= end; j++)
				a[j] = false;
			gets(line);
		}
		max = i = startTime = 0;
		while (i < SIZE) {
			time = 0;
			while (i < SIZE && a[i])
				time++, i++;
			if (time > max)
				max = time, maxStartTime = startTime;
			while (i < SIZE && !a[i])
				startTime = i++;
		}
		printf("Day #%d: the longest nap starts at ", count++);
		h1 = 10 + (maxStartTime / 60);
		m1 = maxStartTime % 60;
		printf(m1 < 10 ? "%d:0%d and will last for" : "%d:%d and will last for", h1, m1);
		if (max < 60)
			printf(" %d minutes.\n", max);
		else
			printf(" %d hours and %d minutes.\n", max / 60, max % 60);
	}
}
