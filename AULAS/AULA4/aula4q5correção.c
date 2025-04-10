#include <stdio.h>
#include <stdlib.h>

int factorial (int n);
int permutation (int n, int p);

int main(int q_parameters, char *parameters[]){

    int n = 0;
    int p = 0;

    switch (q_parameters) {
        case 1:
        printf("Please give number for permutation N:\n");
        scanf("%d%*c", &n);
        printf("Please give number for permutation P:\n");
        scanf("%d%*c", &p);
        printf("the permutation of %d, taken %d until %d is:\n %d", n, p, p, permutation(n, p));
        break;

        case 2:
        n = atoi(parameters[1]);
        printf("Please give number for permutation P:\n");
        scanf("%d%*c", &p);
        printf("the permutation of %d, taken %d until %d is:\n %d", n, p, p, permutation(n, p));
        break;

        case 3:
        n = atoi(parameters[1]);
        p = atoi(parameters[2]);
        printf("the permutation of %d, taken %d until %d is:\n %d", n, p, p, permutation(n, p));
        break;

        default:
        printf("Invalid input and / or uncaught exception\n");
    }

    return 0;

}

int factorial(int n){
    int result = 1;

    for (int i = 2; i <= n; i++){
        result *= i;
    }

    return result;

}

int permutation (int n, int p){
    return factorial(n) / factorial(n-p);

}