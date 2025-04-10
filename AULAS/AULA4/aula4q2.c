#include <stdio.h>

int main(){

    int factorialCounter=1;      // fatorial
    int factorialNumber = 0;
    int factorialInput = 0;

    //catch data?
    printf("please insert factorial number:\n");
    scanf("%d", &factorialNumber);

    factorialCounter = factorialNumber;
    factorialInput = factorialNumber;

    for (int i = factorialCounter; i > 1; i--){
        factorialNumber*=factorialCounter-1;
        factorialCounter--;
    }

   /* while (f > 1) {
        n*=f-1;
        f--;
    }*/

    printf("O fatorial de %d eh: %d", factorialInput, factorialNumber);

    return 0;

}