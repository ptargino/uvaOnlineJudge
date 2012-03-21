#include <cstdio>

using namespace std;

int main(){
	int t;
	int a[1000];
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int count = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			for(int j = 0; j < i; j++)
				if(a[j] <= a[i])
					count++;
		}
		printf("%d\n", count);
	}
}
