#include <stdio.h>

int fatorial(int n);

int main(void){

    int num = 0;

    printf("\nDigite um número para calcular o fatorial: ");
    scanf("%d", &num);
    
    printf("%d! = %d", num, fatorial(num));

    return 0;
}

int fatorial( int n){
    if(n == 0)
        return 1;
    else
        return n* fatorial(n-1);
}

#include <stdio.h>

int factorial(int n);

int main(void){

    int num = 0;

    printf("Please input a number for factorial calculation.");
    scanf("%d", &num);

    printf("The factorial of %d is:\n %d", num, factorial(num));

    return 0;
}

int factorial(int n){
    if (n == 0){
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}