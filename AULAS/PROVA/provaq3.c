#include <stdio.h>

void swap(int *num1, int *num2);
void sort(int *vetor, int n, char ordem);

int main() {




    return 0;

}

void swap(int *num1, int *num2){
    int suporte = 0;
    suporte = *num1;
    *num1 = *num2;
    *num2 = suporte;
}



void sort(int *vetor, int n, char ordem){

    switch(ordem){
        case 'c':
        case 'C':
            for (int i = 0; i < n-1; i++){
                for (int j =i+1; j < n; j++){
                    if (vetor[i] > vetor[j]){
                        swap(&vetor[j], &vetor[i]);
                    }
                }
            }

        break;

        case 'd':
        case 'D':
            for (int i = 0; i < n-1; i++){
                for (int j=i+1; j < n; j++){
                    if(vetor[i] < vetor[j]){
                        swap(&vetor[i], &vetor[j]);
                    }
                }
            }
        
        break;

        default:
            printf("lmao");
    }

}