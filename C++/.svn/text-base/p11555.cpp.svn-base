#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

double min(double a, double b) {
	return a < b ? a : b;
}

double abs(double a) {
	return a < 0 ? -a : a;
}

double pow(double a) {
	return a * a;
}

int main() {
	const int LEFT = 0, RIGHT = 1;
	int n, l, w, i, j, leftPlaced, rightPlaced, intervals;
	int pos[2000];
	double cost[100][100];
	double position, dist;
	while (scanf("%d", &n) == 1) {
		intervals = (n / 2) - 1;
		dist = (double) w / intervals;
		scanf("%d%d", &l, &w);
		for (i = 0; i < n; i++)
			scanf("%d", &pos[i]);
		sort(pos, pos + n);
		cost[0][0] = 0;
		for (i = 1; i <= n; i++) {
			cost[i][0] = cost[i - 1][0] + pos[i-1];
			cost[0][i] = cost[0][i - 1];
		}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++) {

			}

	}
}
