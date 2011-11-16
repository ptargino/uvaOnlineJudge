#include <stdio.h>

int main(){
    int matrixH[100], matrixV[100], n,i,j,a, errorH, errorV, corrupt;
    while(scanf("%d", &n) && n){
        corrupt = errorH = errorV = 0;
        for(i = 0; i < n; i++)
            matrixH[i] = matrixV[i] = 0;
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                if(scanf("%d",&a) && a){
                    matrixH[i]++;
                    matrixV[j]++;
                }
        for(i = 0; i < n && !corrupt; i++)
            if(matrixH[i] % 2)
                if(errorH) corrupt = 1; 
                else       errorH = i+1;           
        for(i = 0; i < n && !corrupt; i++)
            if(matrixV[i] % 2)
                if(errorV) corrupt = 1;
                else       errorV = i+1;
        if (errorH && errorV) printf("Change bit (%d,%d)\n",errorH,errorV);
        else if (corrupt) printf("Corrupt\n");
        else printf("OK\n");
    }
    return 0;
}
