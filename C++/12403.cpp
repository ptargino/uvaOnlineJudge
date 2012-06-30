#include <cstdio>
#include <cstring>

int main() {
	char s[10];
	int n, value, sum = 0;
	while(n--){
		scanf("%s", s);
		if(strcmp("donate", s)){
			printf("%d\n", sum);
		} else {
			scanf("%d", &value);
			value += sum;
		}
	}
}
