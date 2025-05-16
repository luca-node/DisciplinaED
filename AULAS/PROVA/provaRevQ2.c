#include <stdio.h>
#include <stdlib.h>

int conta_num_em_mat(float** mat, float num, int lin, int col); 

int main (){

    float num = 0;
    int lin = 0, col = 0;

    printf("Digite o numero float de comparacao, o numero de linhas, e o numero de colunas.");
    scanf("%f %d %d", &num, &lin, &col);


}

int conta_num_em_mat(float** mat, float num, int lin, int col){

    float** nMatrix = (float**)malloc(lin * sizeof(float*));

    if (!nMatrix){
        printf("Falha ao alocar memoria");
        exit(1);
    }

    for (int i = 0; i < lin; i++){
        nMatrix[i] = (float*)malloc(col * sizeof(float));

        if (!nMatrix){
            printf("Falha ao alocar memoria");
            exit(1);
        }
    }


    int counter = 0;
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; i++){
            if(nMatrix[i][j] == num){
                counter++;
            } 
        }
    }

    return counter;
}