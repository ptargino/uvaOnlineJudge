#include <iostream>

using namespace std;

int main() {
	int num, i, j, m, n, q, x, y, size, a, b;
	char grid[100][100], ch;
	bool equal;
	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> m >> n >> q;
		printf("%d %d %d\n", m, n, q);
		for (j = 0; j < m; j++)
			cin >> grid[j];
		for (j = 0; j < q; j++) {
			size = 0;
			cin >> x >> y;
			ch = grid[x][y];
			while ((x - size) >= 0 && (x + size) < m && (y - size) >= 0 && (y + size) < n) {
				equal = true;
				for (a = x - size; a <= x + size && equal; a++)
					for (b = y - size; b <= y + size && equal; b++)
						if (grid[a][b] != ch)
							equal = false;
				if (equal) size++;
				else break;
			}
			cout << (2 * size - 1) << endl;
		}
	}

}
