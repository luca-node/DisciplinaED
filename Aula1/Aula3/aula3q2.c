#include <stdio.h>

int main(){

    int n, n2;    // input numbers
    int m;        // highest number

    //catch data?
    printf("please insert numbers:");
    scanf("%d%d", &n, &n2);

    m = n > n2 ? n : n2 ;

    printf("the highest number is %d\n", m);

    return 0;

}