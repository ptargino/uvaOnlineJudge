#include<stdio.h>
#include<math.h>

int main() {
	double a, pi_3, sqrt3, cx, cy, cz;
	pi_3 = 2.0 * acos(0.0) / 3.0;
	sqrt3 = sqrt(3.0);
	cx = (4.0 - sqrt3 - (2.0 * pi_3));
	cy = (pi_3 + (2.0 * sqrt3) - 4.0);
	cz = (pi_3 + 1.0 - sqrt3);
	while (scanf("%lf", &a) == 1) {
		printf("%.3lf %.3lf %.3lf\n", a * a * cz, a * a * cy, a * a * cx);
	}
}
