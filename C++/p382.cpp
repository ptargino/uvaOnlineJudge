#include <stdio.h>

using namespace std;

int main(){
    int n,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n) && n){
        sum = 0;
        for(int i = 1; i <= n/2; i++)
            if (n % i == 0)
                sum += i;
        if (n >= 10000)
            printf("%d  ", n);
        else if (n >= 1000)
            printf(" %d  ", n);
        else if (n >= 100)
            printf("  %d  ", n);
        else if (n >= 10)
            printf("   %d  ", n);
        else
            printf("    %d  ", n);
        printf((n == sum ? "PERFECT\n":(n > sum ? "DEFICIENT\n" : "ABUNDANT\n")));
    }
    printf("END OF OUTPUT\n");
}
