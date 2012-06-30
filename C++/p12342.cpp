#include <cstdio>

int min(int a, int b){
	return a < b ? a : b;
}

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		long tax = 0, sum;
		scanf("%ld", &sum);
		
		sum -= 180000;

		if(sum > 0){
			tax += 10 * min(sum, 300000);
			sum -= 300000;
		}
		
		if(sum > 0){
			tax += 15 * min(sum, 400000);
			sum -= 400000;
		}
		
		if(sum > 0){
			tax += 20 * min(sum, 300000);
			sum -= 300000;
		}
		
		if(sum > 0)
			tax += sum * 25;
		
		tax = tax % 100 ? tax / 100 + 1: tax / 100;
		printf("Case %d: %ld\n", i, tax && tax < 2000 ? 2000 : tax);		
	}
}
