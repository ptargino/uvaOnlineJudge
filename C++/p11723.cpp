#include <stdio.h>

int main(){
	int a, b, t = 1;
	while(scanf("%d%d", &a, &b) && a && b){
		if((a-1)/b > 26)
			printf("Case %d: impossible\n", t);
		else
			printf("Case %d: %d\n", t, (a-1)/b);
		t++;
	}
}
