#include <stdio.h>

int main(){

    int number1, number2; // input variables for comparison
    int hiNumber;         // highest number

    printf("please insert two numbers for comparison:\n");
    scanf("%d%d", &number1, &number2);

    hiNumber = number1>number2?number1:number2;

    printf("the highest number is: \n%d", hiNumber);

    return 0;

}