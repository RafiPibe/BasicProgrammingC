/*
Input :
Fahrenheit

Output :
speed of sound
*/

#include <stdio.h>
#include <math.h>

int main() {

    double fahrenheit,
    a;

    printf("Enter the temperature (Fahrenheit) > ");
    scanf("%lf", &fahrenheit);

    a = 1086 * (sqrt((5 * fahrenheit + 297) / 247));

    printf("The speed of sound calculated is %.2lf ft/sec", a);

    return 0;
}