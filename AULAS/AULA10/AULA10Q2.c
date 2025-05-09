#include <stdio.h>
#include <stdlib.h>

int imprime (char* s);

int main(){

    char* txxt = "lucas de souza";

    imprime("hello world");

    imprime(txxt);

    return 0;
    
}

int imprime (char* s){

    int i = 0;
    int n = 0;
    for (i = 0; s[i] != '\0'; i++){
        printf ("%c \n", s[i]);
        n++;

    }

    printf ("%c \n", s[i]);
    printf("%d", n);


    return n;

}