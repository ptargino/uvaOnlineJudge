#include <stdio.h>

int main() {
	int h, u, d, f, day;
	float height, fatigue, climb;
	while (scanf("%d%d%d%d", &h, &u, &d, &f) == 4 && h && u && d && f) {
		height = 0.0;
		day = 1;
		climb = u;
		fatigue = (climb / 100 * f);
		while (true) {
			if (climb > 0)
				height += climb;
			if (height > h) {
				printf("success on day %d\n", day);
				break;
			}

			height -= d;
			if (height < 0) {
				printf("failure on day %d\n", day);
				break;
			}
			climb -= fatigue;
			day++;
		}
	}
}
