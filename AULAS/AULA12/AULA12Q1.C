#include <stdio.h>
#include <stdlib.h>


void imprime_rec(char* s);

int main (){

    char nome[51] = "meu nome";
    imprime_rec(nome);
    
    return 0;
}

void imprime_rec(char* s){

    if (s[0] != '\0'){
        putchar(s[0]);
        imprime_rec(&s[1]); //para inverter a ordem, colocar essa linha acima de putchar
    }

}