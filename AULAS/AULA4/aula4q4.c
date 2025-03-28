#include <stdio.h>

int main(){

    char option='i';

    do {
        printf("Voce gostaria de continuar? (S/N)");
        scanf("%c%*c", &option);

    } while (option != 's' && option != 'S' && option != 'n' && option != 'N');

    switch (option) {

        case 's':
        case 'S':
            printf("User has decided to continue.");
            break;

        case 'n':
        case 'N':
            printf("User has decided to stop.");
            

        default:
            printf("never getting here lol");
    }

    /*if (option == 'S' || option == 's') {
        printf("User has decided to continue.");
    } else if (option == 'N' || option == 'n') {
        printf("User has decided to stop.");
    }*/

    return 0;

}