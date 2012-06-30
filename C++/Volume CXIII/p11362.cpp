#include <iostream>
#include <math.h>

using namespace std;

int main() {
	char phone[10000][11];
	int *length = new int[10000];
	int t, n, i, j, k;
	bool consistent;
	scanf("%d", &t);
	for (; t; t--) {
		scanf("%d", &n);
		consistent = true;
		for (i = 0; i < n; i++) {
			scanf("%s", phone[i]);
			for (j = 0; j < i && consistent; j++) {
				for (k = 0; phone[i][k] != '\0' && phone[j][k] != '\0'
						&& phone[i][k] == phone[j][k]; k++)
					;
				if (phone[i][k] == '\0' || phone[j][k] == '\0')
					consistent = false;
			}
		}
		printf(consistent ? "YES\n" : "NO\n");
	}
}

