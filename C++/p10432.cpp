#include<stdio.h>
#include<math.h>

int main() {
	double angle, radius, ans;
	double pi = 2 * acos(0.0);
	int numSides;
	while (scanf("%lf%d", &radius, &numSides) == 2) {
		angle = pi / numSides;
		ans = sin(angle) * cos(angle) * radius * radius * numSides;
		printf("%.3lf\n", ans);
	}
}
