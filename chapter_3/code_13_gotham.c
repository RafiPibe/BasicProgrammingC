/*
*/

#include <stdio.h>

double population(int year) {
    const double popBefore = 52966,
    popRate = 2184;
    const int yearBefore = 1990;

    int yearDifference = year - yearBefore;
    double popCurrent = popBefore + (popRate * (double)yearDifference);

    return popCurrent;
}

int main() {
    int year;

    printf("Enter year (after 1990) > ");
    scanf("%d", &year);

    printf("Gotham City population prediction in %d is %.2lf", year, population(year));

    return 0;
}