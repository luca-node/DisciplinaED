#ifndef __TAD_PONTO__
    #define __TAD_PONTO__

    /* Estrutura Exportada */
    struct ponto {
        
        float x;
        float y;

    };


    /* Tipo exportado */
    typedef struct ponto Ponto;

    /* FUNÇÕES EXPORTADAS */

    /* Função Cria
        ** Aloca e retorna um ponto com coordenadas (x,y).   
    */
    Ponto* pto_cria(float x, float y);

    /* Função libera 
    ** Libera a memória de um ponto previamente criado.
    */
    void pto_libera (Ponto* p);

    /* Função acessa
    ** Retorna os valores das coordenadas de um ponto    
    */
    void pto_acessa (Ponto* p, float* x, float* y);

    /* Função atribui 
    ** Atribui novos valores as coordenadas de um ponto
    */
    void pto_atribui (Ponto* p, float x, float y);

    /* Função distancia
    ** Retorna a distância entre dois pontos 
    */
    float pto_distancia (Ponto* p1, Ponto* p2);
    
    #include "TAD_PONTO.c"
#endif