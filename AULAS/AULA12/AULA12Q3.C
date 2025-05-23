#include <stdio.h>
#include <stdlib.h>

typedef char* string; // 'string' é basicamente um ponteiro para caractere

void copia_rec(string destino, string origem);

int main (){

    char nome[44] = "tralalala";
    char nome2[44] = "lol";

    for (int i = 0; i < nome2; i++)
        printf(nome2);

    
    return 0;
}

void copia_rec(string destino, string origem){

    if (orig[0] == '\0') {
        dest[0] = '\0';
                
    } else {
        dest[0] = orig[0];
        copia_rec(&dest[1], &orig[1]);

    }


}