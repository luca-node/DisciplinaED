#include "TAD_PONTO.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

/* Função Cria
        ** Aloca e retorna um ponto com coordenadas (x,y).   
    */
    Ponto* pto_cria(float x, float y){
        Ponto* novo_ponto = (Ponto*)malloc(sizeof(Ponto));
        novo_ponto->x = x;
        novo_ponto->y = y;

        return novo_ponto;

    }

    void pto_libera (Ponto* p){
        free(p);

    }

    void pto_acessa (Ponto* p, float* x, float* y){
        *x = p->x;
        *y = p->y;
    }

    void pto_atribui (Ponto* p, float x, float y){
        p->x = x;
        p->y = y;
    }

    float pto_distancia (Ponto* p1, Ponto* p2){
        float dx = p2->x - p1->x;
        float dy = p2->y - p1->y;

        return sqrt(dx*dx + dy*dy);

    }

    void reiniciar (){
        printf("\n\nRetornando");
            for (int i = 0; i < 10 ; i++){
                printf(".");
                Sleep(225);
            }
        system("cls");
    }

    int pontodef (int a){
        if (a != 1){
            printf("Nao existe um ponto definido.");
            return 0;
        }
        
        return 1;
    }