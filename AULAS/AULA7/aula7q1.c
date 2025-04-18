#include <stdio.h>
#include <stdlib.h>

int average(int a, float* v);

int variance(int n, float* v);

int main(void){

    int n;
    float* v0 = (float*)malloc(10*sizeof(float));

    printf("Insert how many iterations / numbers requested for this operation:\n");
    scanf("%d%*c", &n);

    printf("please insert the numbers:\n");

    for (int i = 0; i < n; i++){
        scanf("%f", &v0[i]);
    }

    average(n, v0);

    if (v0 == NULL){
        printf ("Not enough memory for this operation.");
        return 1;
    }

    printf("\nNumbers initialized via dynamic allocation:\n");

    for (int i = 0; i < n; i++){
        printf("%.1f ", v0[i]);
    }

    return 0;
}

int average(int a, float* v){
    float avg = 0.0;

    for (int i = 0; i < a; i++){
        avg += 
    }
}