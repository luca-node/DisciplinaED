#include <stdio.h>

int main(){

    char option = 'i';

    do {
            printf("Would you like to continue? (Y/N)");
            scanf("%c%*c", &option);

    } while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');

    switch(option){

        case 'y':
        case 'Y':
            printf("user has decided to continue.");
            break;
        
        case 'n':
        case 'N':
            printf("user has decided to stop.");
            break;

        default:
            printf("invalid input and / or operation.");


    }

    return 0;
    
}