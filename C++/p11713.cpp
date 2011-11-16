#include <stdio.h>

inline bool isVowel(char a){
	return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

bool cmp(char* a, char* b){
	int i;
	for(i = 0; a[i] != '\0'; i++)
		if(!(isVowel(a[i]) && isVowel(b[i])) && a[i] != b[i])
			return false;
	return b[i] == '\0';
}

int main(){
	int n;
	char a[21], b[21];
	scanf("%d", &n);
	for(;n;n--){
		scanf("%s%s", a, b);
		printf(cmp(a,b)?"Yes\n":"No\n");
	}
}
