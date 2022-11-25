/*
Input :
barrel of oil
energy equivalent
*/
#include <stdio.h>


int main() {
    int efficiency,
    oil;
    double heat,
    BTU = 58000000 / 42;

    printf("Input the amount of oil (Gallons) > ");
    scanf("%d", &oil);

    printf("Input the efficiency (percentage) > ");
    scanf("%d", &efficiency);

    heat = (oil * BTU) * efficiency / 100.0;

    printf("It will produce %lf of heat BTU", heat);

    return 0;
}