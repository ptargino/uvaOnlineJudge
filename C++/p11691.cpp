#include <stdio.h>
#include <iostream>

using namespace std;

struct day{
	int x[8];
};

inline int max(int a, int b){
	return a> b? a: b;
}
int main(){
	day *M = new day[1 << 20 + 1];
	int t;
	scanf("%d", &t);
	for(;t;t--){
		int k;
		scanf("%d",&k);
		int Days[k];
		for(int i = 0;i < k; i++)
			scanf("%d", &Days[i]);
		for(int i = 0;i < (1 << k); i++)
			for(int j = 0; j < 8; j++)
				M[i].x[j] = 1000;
		M[0].x[1] = 0;
		for(int i = 1;i < (1 << k); i++)
			for(int j = 0; (1 << j) <= i; j++)
				if((i >> j) & 1)
					for(int old = 1; old <= 7; old++){
						int stub = max(Days[j] - old + 1, 1);
						M[i].x[stub] <?= M[i - (1 << j)].x[old] + stub;			
					}
		int min = M[(1 << k) - 1].x[0];
		for(int i = 1; i < 8; i++)
			min <?= M[(1 << k) - 1].x[i];	
		printf("%d\n", min);		
	}
}
