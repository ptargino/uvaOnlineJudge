#include "stdio.h"
#include <algorithm>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	int match[1024];
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		int size = 1 << n;
		for(int i = 0; i < size; i++)
			match[i] = 1;
		int k;
		for(int i = 0; i < m; i++){
			scanf("%d", &k);
			match[k-1] = 0;
		}
		
		int count = 0;
		while(size){
			size /= 2;
			for(int i = 0; i < size; i++){
				if(match[2*i] ^ match[2*i + 1])
					count++;
				match[i] = match[2*i] || match[2*i + 1];
			}
		}
		printf("%d\n", count);
	}
	
}
