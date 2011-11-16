#include <stdio.h>

int main(){
    int i[101], v[101] ,x[101], c[101], l[101];
    int j, unit, dec;
    i[0] = v[0] = x[0] = c[0] = l[0] = 0;
    for(j = 1;j < 101;j++){
        i[j] = i[j-1];
        v[j] = v[j-1];
        c[j] = c[j-1];
        x[j] = x[j-1];
        l[j] = l[j-1];
        unit = j % 10;
        dec = j / 10;
        if (unit)
            if(unit < 4)
                i[j] += unit;
            else if (unit == 4){
                i[j]++;
                v[j]++;
            } else if (unit < 9){
                i[j] += (unit-5);
                v[j]++;
            } else {
                i[j]++;
                x[j]++;
            }
        if (dec)
            if(dec < 4)
                x[j] += dec;
            else if (dec == 4){
                x[j]++;
                l[j]++;
            } else if (dec < 9){
                x[j] += (dec-5);
                l[j]++;
            } else {
                x[j]+=(10-dec);
                c[j]++;
            }        
    }
  
    int n;
    while(scanf("%d",&n) && n)
        printf("%d: %d i, %d v, %d x, %d l, %d c\n", n, i[n], v[n], x[n], l[n], c[n]);
    return 0;
}
