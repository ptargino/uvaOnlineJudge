#include <cmath>
#include <cstdio>

int main(){
	int m, n;
	int *ans = new int[10000001];
	double digits = 0;
	ans[1] = 1;
	for(int i = 2; i <= 10000000; i++){
		digits += log10(i);
		ans[i] = (int) ceil(digits);
	}
	scanf("%d",&m);
	while(m--){
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
}