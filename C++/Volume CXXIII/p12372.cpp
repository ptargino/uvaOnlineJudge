#include <cstdio>

int main() {
	int n, h, w, l;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d%d%d", &h, &w, &l);
		printf("Case %d: %s\n",i, h > 20 || w > 20 || l > 20? "bad" :"good");		
	}
}
