#include <iostream>
#include <math.h>

int main() {
	int l, f;
	double v, volume;
	while (scanf("%d%d", &l,&f) && l && f) {
		v = sqrt(l * f * 2.0);
		volume = (v * 3600) / (2 * l);
		printf("%.8lf %.8lf\n", v, volume);
	}
}
