#include <cstdio>

using namespace std;

int main(){
	int ans[101];
	ans[0] = 0;
	for(int i = 1; i<=100; i++)
		ans[i] = ans[i-1] + i*i;
	int n;
	while(scanf("%d", &n) && n){
		printf("%d\n", ans[n]);
	}


}