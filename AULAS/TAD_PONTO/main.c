#include "TAD_PONTO.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){

    int cnd = -1, s = -2;
    float a = 0, b = 0;

    while (s != 0) {
    
    printf("Escolha uma opcao:\n\n");
    printf("1) Criar ponto  2) Liberar Ponto 3) Acessar Ponto 4) Atribuir Ponto 5) Calcular Distancia 0) Sair 9) checar valor\n");
    scanf("%d", &s);

        switch (s) {

            case 1: // Criar Ponto
                printf("Digite em sequencia os dois pontos:\n");
                scanf("%f%f", &a, &b);
                Ponto* p1 = pto_cria(a, b);
                cnd = 1; // variavel booleana que indica se o ponto foi definido ou nao
                reiniciar(); // imprime mensagem de retorno e limpa a tela
                break;
            
            case 2: // Liberar Ponto
                sleep(1);
                int qq = pontodef(cnd); // checa se o ponto foi definido
                    if (qq == 0){
                        reiniciar(); 
                        continue; // volta para o inicio do while loop
                    }

                printf("\nPonto liberado.\n");
                pto_libera(p1); // se existe um ponto definido, liberar a memória utilizada por ele
                reiniciar();
                cnd = 0; // zera variavel cnd, pois agora o ponto não existe mais

                break;
            
            case 3: // Acessar Ponto
                sleep(1);
                qq = pontodef(cnd); // checa se o ponto foi definido
                if (qq == 0){
                    reiniciar(); 
                    continue; // volta para o inicio do while loop
                }

                float* m;
                float* n;
                printf("teste");
                pto_acessa(p1, m, n);
                
                reiniciar();
                continue;

            case 4: // Atribuir Ponto
                sleep(1);
                qq = pontodef(cnd); // checa se o ponto foi definido
                if (qq == 0){
                    reiniciar(); 
                    continue; // volta para o inicio do while loop
                }

                float q = 0, w = 0;
                printf("\nvalores antes de atribuir: %f     %f\n", p1->x, p1->y);
                pto_atribui(p1, q, w);
                printf("\nvalores depois de atribuir: %f    %f", p1->x, p1->y);
                reiniciar();
                break;

            case 5: // Calcular Distancia
                sleep(1);
                qq = pontodef(cnd); // checa se o ponto foi definido
                if (qq == 0){
                    reiniciar(); 
                    continue; // volta para o inicio do while loop
            }

                float c = 0, v = 0;
                float dist = 0;
                Ponto* p2 = pto_cria(c, v);
                dist = pto_distancia(p1, p2);
                printf("\nA distancia entre os dois pontos eh: %f", dist);
                reiniciar();
                break;
                
            case 0: // sair
                s = 0;
                break;

            case 9:
                printf("\nvalores sao:\n%f\n%f", p1->x, p1->y);
                reiniciar();
                break;

            default:
                printf("Entrada invalida");   
            
        }
    }
    return 0;
}