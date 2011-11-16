#include <stdio.h>

int bubble(int v[], int qtd) {
    int i, j, aux, k = qtd - 1, swaps = 0;
    for(i = 0; i < qtd; i++){
        for(j = 0; j < k; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                swaps++;
            }
        }
        k--;
    }
    return swaps;
}

int main(){
    int train[50],n,m,i,j, swap;
    scanf("%d",&m);
    for(j = 0; j < m; j++){
        scanf("%d",&n);
        for(i = 0; i < n; i++)
            scanf("%d", &train[i]);
        swap = bubble(train,n);
        printf("Optimal train swapping takes %d swaps.\n",swap);
    }
    return 0;
}
