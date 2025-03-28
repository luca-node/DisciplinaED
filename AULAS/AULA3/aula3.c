#include <stdio.h>

int main(){

    int f;      // number in feet
    float inc;  // number in inches
    float m;    // height in meters


    //catch data?
    printf("please insert height in meters:");
    scanf("%f", &m);

    
    // *** calculates height in imperial units ***
    
    m = m*100;  // meter to centimeter conversion
    f = (int)(m/30.48); // calculates height in feet
    inc = (m-f*30.48) / 2.54; // calculates remainder as inches

    printf("Height in imperial units: %dft and %.1f inches\n", f, inc);

    return 0;

}