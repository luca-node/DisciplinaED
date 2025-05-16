#include <stdio.h>
#include <stdlib.h>

char* uppercase_copy(char* string);

int main(){


    return 0;
}

char* uppercase_copy(char* string){

    int cont = 0;
    for (int i = 0; string[i] != '\0'; i++, cont++);

    char* new_string = (char*)malloc((cont+1) * sizeof(char));

    for (int i = 0; i < cont+1; i++){
        new_string[i] = string[i];
    }

    for (int i = 0; new_string[i] != '\0'; i++){
        if ('a' <= new_string[i] && new_string[i] <= 'z'){
            new_string[i] = new_string[i] - 'a' + 'A';
        }
    }

    return new_string;

}