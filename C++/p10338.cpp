#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, j, k, n, len;
	long long fat[21], ans;
	char line[21], out[51];
	char* str = new char[1080000];
	long size = 0;
	fat[0] = 1;
	for (i = 1; i < 21; i++)
		fat[i] = i * fat[i - 1];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", line);
		len = strlen(line);
		sort(line, line + len);
		ans = fat[len];
		k = 1;
		for (j = 1; j < len; j++)
			if (line[j] == line[j - 1])
				k++;
			else {
				ans /= fat[k];
				k = 1;
			}
		ans /= fat[k];
		sprintf(out, "Data set %d: %lld\n", i, ans);
		for (j = 0; out[j] != '\0'; j++)
			str[size++] = out[j];
	}
	str[size++] = '\0';
	printf("%s", str);
}
