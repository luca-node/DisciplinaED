#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
    float x;
    float y;

} Ponto;

typedef struct circulo {
    struct ponto centro;
    float raio;

} Circulo;

int main(){

    Circulo cir;

    p.x = 4.0;
    p.y = 3.0;

    cir.centro.x = 1.0;
    cir.centro.y = 1.5;
    cir.raio = 10.0;



    return 0;
}

float distancia (Ponto* q, Ponto* p){
    float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
    return d;
}