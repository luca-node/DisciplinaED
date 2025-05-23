#include <stdio.h>
#include <stdlib.h>

typedef char* string; // 'string' é basicamente um ponteiro para caractere

int comprimento_rec(string s);

int main (){

    char nome[51] = "meu nome";
    int nome2 = comprimento_rec(nome);
    printf("O numero eh: %d", nome2);
    
    return 0;
}

int comprimento_rec(string s){

    if (s[0] == '\0') {
        return 0;
    } else {
        return 1 + comprimento_rec(&s[1]);

    }


}