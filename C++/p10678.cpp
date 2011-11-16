#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double d, l;
	const double pi = acos(0.0);
	scanf("%d", &n);
	for (; n; n--) {
		scanf("%lf%lf", &d, &l);
		printf("%.3lf\n", pi * (sqrt((l * l) - (d * d)) / 2) * l);
	}
}

