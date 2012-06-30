#include <cstdio>

int main() {
	int n, c, r, ans[50000];
	scanf("%d", &n);
	for(int t = 1; t <= n; t++){
		scanf("%d%d", &c, &r);
		printf("Case #%d:", t);
		c -= r;
		if(c){
			int size = 0;
			for(int i = 1; i * i <= c; i++)
				if(c % i == 0){
					if(i > r)
						printf(" %d", i);
					if(i*i != c && c / i > r)
						ans[size++] = c / i;
				}
			for(int i = size - 1; i >= 0; i--)
				printf(" %d", ans[i]);
		} else printf(" 0");
		printf("\n");
	}
}