#include <iostream>
#include <stdlib.h>

using namespace std;

//int fibonacci(int n) {
//	int* fib = (int*) malloc(n + 1);
//	fib[0] = fib[1] = 1;
//	for (int i = 2; i <= n; i++)
//		fib[i] = fib[i - 1] + fib[i - 2];
//	int ans = fib[n];
//	free(fib);
//	return ans;
//}
//
//bool mochila(int* pesoItens, int numItens, int capacidadeMochila) {
//	if (numItens == 0)
//		return (capacidadeMochila == 0);
//	if (mochila(pesoItens, i - 1, capacidadeMochila))
//		return true;
//	if (pesoItens[numItens - 1] <= capacidadeMochila)
//		return mochila(pesoItens, i - 1,
//				capacidadeMochila - pesoItens[numItens - 1]);
//	return false;
//}

int main() {
	double a = 1.2345;
	printf("%.2lf",a);
}

