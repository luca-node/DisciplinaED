#include <stdio.h>
#include <stdlib.h>

void imprime (char *s);

int main(){

    char* txxt = "lucas de souza";

    imprime("hello world");

    imprime(txxt);

    return 0;
    
}

void imprime (char *s){

    int i = 0;
    int n = 0;
    for (i = 0; i != '\0'; i++){
        printf("%c", s[i]);

    }

    printf ("\n");

}