#include <stdio.h>

void imprime(int n);

int main (void) {


    imprime(1);

    return 0;

}

void imprime(int n){

    if(n==0){
        return 1;
    } else {
        return n* fatorial(n-1);
    }
/*    printf("%d\n", n);
    imprime(n+1);
*/
}