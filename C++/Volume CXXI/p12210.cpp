#include <cstdio>

int main() {
	int b, s, count = 1, diff;
	while(scanf("%d%d", &b, &s) && b){
		int minAge = 10000, age;
		diff = b-s;
		while(b--){
			scanf("%d", &age);
			if(age < minAge) minAge = age;
		}
		while(s--)		scanf("%d", &age);
		if (diff > 0)	printf("Case %d: %d %d\n", count ++, diff, minAge);
		else 			printf("Case %d: 0\n", count++);
	}
}
