#include <stdio.h>

int main(){

    int f=1;      // fatorial
    int n = 0;
    int inp = 0;

    //catch data?
    printf("please insert factorial number:");
    scanf("%d", &n);

    f = n;
    inp = n;

    for (int i = f; i > 1; i--){
        n*=f-1;
        f--;
    }

   /* while (f > 1) {
        n*=f-1;
        f--;
    }*/

    printf("O fatorial de %d eh: %d", inp, n);

    return 0;

}