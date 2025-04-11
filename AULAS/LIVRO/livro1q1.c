#include <stdio.h>

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y);

int main(void){

    int x0, y0, x1, y1, x, y, result;

    printf("Favor digitar os vertices inferiores x0 e y0:\n");
    scanf("%d %d", &x0, &y0);
    printf("Favor digitar os vertices superiores x1 e y1:\n");
    scanf("%d %d", &x1, &y1);

    printf("\n Por ultimo, digite o ponto x e y desejado:\n");
    scanf("%d %d", &x, &y);

    result = dentro_ret(x0, y0, x1, y1, x, y);

    if (result == 0){
        printf("O ponto esta fora do retangulo");
    }

    else {
        printf("O ponto esta dentro do retangulo");
    }

    return 0;

}

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y){

    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) {
        return 1;
    }

    else {
        return 0;
    }


}