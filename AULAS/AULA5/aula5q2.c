#include <stdio.h>
#include <stdlib.h>

int fat (int n){

    for (int i = n; i > 1; i--){
        n*=f-1;
        f--;
    }
       
}

int main(){

    int f=1;      // fatorial
    int n = 0;
    int inp = 0;
    int inp2 = 0;

    //catch data?
    printf("please insert factorial number:");
    scanf("%d", &n);

    f = n;
    inp = n;

    inp2 = fat(n);

   /* while (f > 1) {
        n*=f-1;
        f--;
    }*/

    printf("O fatorial de %d eh: %d", inp, inp2);

    return 0;

}