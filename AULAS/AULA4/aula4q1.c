#include <stdio.h>

    int main(){

        int factorialCounter=1;  // counter for factorial iterations
        int factorialNumber = 0; // factorial value for iteration and calculation
        int factorialInput = 0;  // saves value input by user

        printf("please insert factorial number");
        scanf("%d", &factorialNumber);
        
        factorialCounter = factorialNumber;
        factorialInput = factorialNumber;

        while (factorialCounter > 1) {
            factorialNumber *= factorialCounter-1;
            factorialCounter--;
        }

        printf("the factorial of %d is:\n%d", factorialInput, factorialNumber);

        return 0;

    }