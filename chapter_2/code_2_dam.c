#include <stdio.h>
#define Gravity 9.8

int main() {

    double height,
    mass,
    work,
    megawatt;

    printf("Enter height in m >");
    scanf("%lf", &height);

    printf("\nenter cubic meters of water >");
    scanf("%lf", &mass);

    work = (mass * 1000) * height * Gravity;
    work = work * 0.9;

    megawatt = work / 1000000;

    printf("\nGenerated Megawatts is %lf MW\n", megawatt);

    return 0;
}