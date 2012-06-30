#include <cstdio>

int main() {
	int b, s, c=1;
	while(scanf("%d%d", &b, &s) && b)
		printf("Case %d: %s\n",c++,b == 1 ? ":-\\": (b <= s? ":-|":":-("));
}
