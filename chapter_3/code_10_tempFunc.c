/*
Input :
depth (KM)
celcius_at_depth

Output :
Fahrenheit
*/

#include <stdio.h>

double celcius_at_depth(double km) {
    double celc;

    celc = (10 * km) + 20;
    return celc;
}

double fahrenheit(double celcius) {
    double fahr;

    fahr = 1.8 * celcius + 32;
    return fahr;

}

int main() {

    double celcius,
    km;
    
    printf("enter depth (KM) > ");
    scanf("%lf", &km);

    celcius = celcius_at_depth(km);

     printf("with the depth of %.2lf km, the heat is %.2lf Celcius or %.2lf Fahrenheit\n", km, celcius, fahrenheit(celcius));

    return 0;
}

