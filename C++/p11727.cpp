#include <stdio.h>
inline int max(int a, int b){
	return a > b ? a : b;
}

inline int min(int a, int b){
	return a < b ? a : b;
}

int main(){
	int a, b, c, t;
	scanf("%d", &t);
	for(int n = 1; n <= t;n++){
		scanf("%d%d%d", &a, &b, &c);
		printf("Case %d: %d\n", n, a + b + c - max(max(a,b),c) - min(min(a,b),c));
	}
}
