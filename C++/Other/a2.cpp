#include <iostream>

using namespace std;

int main() {
	char num[100001];
	long size, d, i, end, start;
	while (cin >> size >> d && size && d) {
		gets(num);
		gets(num);
		end = start = 0;
		//Para n�o precisar fazer caso especial para �ltimo(s) d�gito(s)
		num[size] = '9' + 1;
		while (d && start < size) {
			//Procura o maior d�gito dentre uma faixa, e depois imprime-o
			for (i = start; i <= start + d; i++)
				if (num[i] > num[end])
					end = i;
			if (end < size)
				putchar(num[end]);
			//Atualiza quantidade de digitos eliminados
			d -= (end - start);
			//Come�a novamente a partir do d�gito seguinte
			end = start = end + 1;
		}
		//Imprime o resto dos d�gitos n�o percorridos
		while (end < size)
			putchar(num[end++]);
		putchar('\n');
	}
}
