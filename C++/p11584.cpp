#include <stdio.h>
#include <string.h>

char* ans;

bool isPalyndrome(int begin, int end) {
	for (int i = 0; begin + (i << 1) < end; i++)
		if (ans[begin+i] != ans[end - i])
			return false;
	return true;
}

int main() {
	int a[1001];
	int n;
	ans = new char[1001];
	scanf("%d", &n);
	a[0] = 0;
	for (; n; n--) {
		scanf("%s", ans);
		int len = strlen(ans);
		for (int i = 0; i < len; i++) {
			a[i + 1] = a[i] + 1;
			for (int j = 0; j <= i; j++)
				if (isPalyndrome(j, i))
					a[i + 1] <?= 1 + a[j];
		}
		printf("%d\n", a[len]);
	}
}
