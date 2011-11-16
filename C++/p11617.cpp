#include <stdio.h>

int h, w;
int **map;

inline int leftEven(int j){
	for(int i = 0; i < w; i++)
		if(!(map[j][i] & 1))
			return i;
	return -1;
}

inline int rightEven(int j){
	for(int i = w - 1; i >= 0; i--)
		if(!(map[j][i] & 1))
			return i;
	return -1;
}

inline int abs(int a){
	return a < 0? -a: a;
}

inline int min(int a, int b){
	return a < b ? a: b;
}

int pd(){
	int ans[h + 1][w];
	for(int i = 0; i < w;i++)
		ans[h][i] = -1;
	for(int i = h - 1; i >= 0; i--){
		int left = leftEven(i);
		int right = rightEven(i);
		if(left == -1){
			for(int j = 0; j < w; j++)
				ans[i][j] = 1 + ans[i+1][j];
		} else {
			ans[i][left] =  1 + right - left + ans[i+1][right];
			ans[i][right] =  1 + right - left + ans[i+1][left];
			for(int j = 0; j < w; j++)
				ans[i][j] =  min(ans[i][left] + abs(j-left), ans[i][right] +  abs(j-right));
		}		
	}
	return ans[0][0];
}

int main(){
	int n;
	scanf("%d", &n);
	for(;n;n--){
		scanf("%d%d",&w, &h);
		char line[w+1];
		map = new int*[h];
		for(int i = 0; i < h;i++){
			scanf("%s", line);
			map[i] = new int[w];
			for(int j = 0;  line[j] != 0; j++)
				map[i][j] = line[j] - '0';
		}		
		while(h > 0 && leftEven(h - 1) == -1)
			h--;
		printf("%d\n", h ? pd(): 0);
	}
}
