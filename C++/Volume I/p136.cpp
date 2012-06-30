#include <cstdio>
#define min(a,b) ((a) < (b) ? (a) : (b))
#define min3(a,b,c) min(min(a,b),c)

int a[1510];

int main() {
        int p2, p3, p5;
        p2 = p3 = p5 = 1;
        a[1] = 1;
        for (int i = 2; i <= 1500; i++) {
                a[i] = min3(2*a[p2], 3*a[p3], 5*a[p5]);
                if (a[i] == 2*a[p2]) p2++;
                if (a[i] == 3*a[p3]) p3++;
                if (a[i] == 5*a[p5]) p5++;
        }
        printf("The 1500'th ugly number is %d.\n", a[1500]);
}