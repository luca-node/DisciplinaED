#include <stdio.h>

int main(){

    char option= 'i';

    do {
            printf("would you like to continue? (Y/N)\n");
            scanf("%c%*c", &option);

    }   while (option != 'y' && option != 'Y' && option != 'n' && option!= 'N');

    if (option == 'y' || option =='Y'){
        printf("user has decided to continue.");

    } else if(option =='n' || option =='N'){
        printf("user has decided to stop.");

    }

    return 0;
}