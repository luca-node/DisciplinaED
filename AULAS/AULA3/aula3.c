#include <stdio.h>

int main(){

    int feet; // meters converted to feet
    float inches; // inches remainder of feet 
    float meters; // meter input from user

    printf("please input height in meters: \n");
    scanf("%f", &meters);

    meters = meters * 100; // meter to centimeter conversion
    feet = (int)(meters/30.48); // converts height(meter) into height(feet)
    inches = ((meters-feet*30.48) / 2.54); // multiplies the value of feet by 30.48 to get the value of inches and deduces meters from it, then divides it by 2.54

    printf("Height in imperial units is: %dft and %.1f inches", feet, inches);

    return 0;
}