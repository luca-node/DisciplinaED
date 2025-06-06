#include "TAD_PONTO.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){

    int cnd = NULL, s = 0;

    printf("Escolha uma opção:\n\n")
    printf("1) Criar ponto  2) Liberar Ponto 3) Acessar Ponto 4) Atribuir Ponto 5) Calcular Distancia   0) Sair\n");
    scanf("%d", &s);
    switch (s) {

        case 1:
            float a = 0, b = 0;
            printf("Digite em sequencia os dois pontos:\n");
            scanf("%f%f", &a, &b);
            Ponto* p1 = pto_cria(a, b);
            cnd = 1;
            reiniciar();
            break;
        
        case 2:
            if (cnd =! 1){
                printf("Você precisa definir o ponto pelo menos uma vez.");
                break;
            }

            pto_libera(p1);
            reiniciar();
            break;
        
        case 3:
           
    }
    

    printf("\n(%.2f, %.2f)\n", p1->x, p1->y);
    return 0;
}