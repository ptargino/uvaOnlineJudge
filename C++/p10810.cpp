#include <stdio.h>

long v[500000], aux[500000];
long long total;

void merge(int left, int middle, int right) {
	long endLeft = middle - 1, quant = right - left + 1, pos = left;
	while (left <= endLeft && middle <= right)
		if (v[left] <= v[middle]) {
			if (pos > left)
				total += pos - left;
			aux[pos++] = v[left++];
		} else {
			if (pos > middle)
				total += pos - middle;
			aux[pos++] = v[middle++];
		}
	while (left <= endLeft) {
		if (pos > left)
			total += pos - left;
		aux[pos++] = v[left++];
	}
	while (middle <= right) {
		if (pos > middle)
			total += pos - middle;
		aux[pos++] = v[middle++];
	}
	for (; quant; quant--, right--)
		v[right] = aux[right];
}

void mergeSort(int left, int right) {
	if (right <= left)
		return;
	int meio = (right + left) >> 1;
	mergeSort(left, meio), mergeSort(meio + 1, right);
	merge(left, meio + 1, right);
}

int main() {
	long i, n;
	while (scanf("%ld", &n) && n) {
		for (i = 0; i < n; i++)
			scanf("%ld", &v[i]);
		total = 0;
		mergeSort(0, n - 1);
		printf("%lld\n", total);
	}
}
