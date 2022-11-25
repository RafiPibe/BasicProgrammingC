/*
Input :
depth (KM)
celcius_at_depth

Output :
Fahrenheit
*/

#include <stdio.h>

int main() {

    double celcius_at_depth,
    km,
    fahrenheit;
    
    printf("enter depth (KM) > ");
    scanf("%lf", &km);

    celcius_at_depth = 10 * km + 20;
    fahrenheit = 1.8 * celcius_at_depth + 32;

    printf("with the depth of %.2lf km, the heat is %.2lf Celcius or %.2lf Fahrenheit\n", km, celcius_at_depth, fahrenheit);

    return 0;
}

