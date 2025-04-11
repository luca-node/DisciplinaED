#include <stdio.h>

int eh_numero_perfeito(int num);

int main() {

    int num = 0;

    printf("Digite um numero pra ver se eh perfeito:\n");
    scanf("%d",&num);

    if (eh_numero_perfeito(num)){
        printf("numero perfeito");
    }  else {
        printf("numero nao perfeito");
    } 

    return 0;

}

int eh_numero_perfeito(int num){

    int soma_divisores = 0;

    for(int i = 1; i < num; i++){
        if (num % i == 0) {
            soma_divisores += i;
        }


    }

    if (soma_divisores == num){
        return 1;

    }

    else {
        return 0;
    }
}

