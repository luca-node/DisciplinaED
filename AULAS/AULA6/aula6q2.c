#include <stdio.h>

void imprime(float a);

int main (void){


    for (int i = 0; i < 16; i++) {

    imprime((float)rand());

    }

    return 0;
}

void imprime(float a) {
    static int cont = 0;

    if (cont % 5 == 0) {
        printf("\n%d : %.2f ", cont, a);
    } else {
        printf("%d : %.2f ", cont, a);

    }
    cont++;

}