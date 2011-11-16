#include <stdio.h>

bool finished = false; /* found all solutions yet? */

bool is_a_solution(int k, int n) {
	return (k == n); /* is k == n? */
}

void construct_candidates(int c[], int *ncandidates) {
	c[0] = true;
	c[1] = false;
	*ncandidates = 2;
}

void process_solution(int a[], int k) {
	int i;
	printf("{");
	for (i = 1; i <= k; i++)
		if (a[i] == false)
			printf(" %d", i);
	printf(" }\n");
}

void backtrack(int a[], int k, int input) {
	int c[2];
	int ncandidates;
	int i;
	if (is_a_solution(k, input))
		process_solution(a, k);
	else {
		k++;
		construct_candidates(c, &ncandidates);
		for (i = 0; i < ncandidates; i++) {
			a[k] = c[i];
			backtrack(a, k, input);
			if (finished)
				return; /* terminate early */
		}
	}
}

void generate_subsets(int n) {
	int a[100]; /* solution vector */
	backtrack(a, 0, n);
}

int main() {
	generate_subsets(5);
}
