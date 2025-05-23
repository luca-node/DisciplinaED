#include <stdio.h>
#include <stdlib.h>

typedef char* string; // 'string' é basicamente um ponteiro para caractere

#define MAX 50

void lenomes(string destino, string origem);

int main (){

    string alunos[MAX];

    int n = lenomes(alunos);

    
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