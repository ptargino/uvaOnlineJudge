#include <cstdio>

int main() {
	char order[101], dir[2];
	int xSize, ySize, x, y;
	bool lost[51][51], isLost;
	for(int i = 0; i < 51; i++)
		for(int j = 0; j < 51; j++)
			lost[i][j] = false;
	scanf("%d%d", &xSize, &ySize);
	while (scanf("%d%d%s%s", &x, &y, dir, order) == 4) {
		isLost = false;
		for (int i = 0; order[i] != '\0' && !isLost; i++)
			if (order[i] == 'L')
				dir[0] = dir[0] == 'N'?'W':(dir[0] == 'E'?'N':(dir[0] == 'S'?'E':'S'));
			else if (order[i] == 'R')
				dir[0] = dir[0] == 'N'?'E':(dir[0] == 'E'?'S':(dir[0] == 'S'?'W':'N'));
			else if (dir[0] == 'N' && y < ySize)
				y++;
			else if (dir[0] == 'E' && x < xSize)
				x++;
			else if (dir[0] == 'S' && y > 0)
				y--;
			else if (dir[0] == 'W' && x > 0)
				x--;
			else if (!lost[x][y])
				lost[x][y] = isLost = true;
		printf("%d %d %s%s\n", x, y, dir, isLost ? " LOST":"");
	}
}