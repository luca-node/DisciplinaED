#include <stdio.h>

int main(){

    int f=1;      // fatorial support
    int n = 0;    // factorial number
    int inp = 0;  // unmodified start value

    //catch data?
    printf("please insert factorial number:");
    scanf("%d", &n);

    f = n;
    inp = n;

    while (f > 1) {
        n*=f-1;
        f--;
    }

    printf("O fatorial de %d eh: %d", inp, n);

    return 0;

}