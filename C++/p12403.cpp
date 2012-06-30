#include <cstdio>
#include <cstring>

int main() {
	char s[10];
	int n, value, sum = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%s", s);
		if(strcmp("donate", s)){
			printf("%d\n", sum);
		} else {
			scanf("%d", &value);
			sum += value;
		}
	}
}
