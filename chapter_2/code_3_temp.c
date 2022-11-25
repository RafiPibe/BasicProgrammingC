#include <stdio.h>

int main () {
    
    double time,
    temp,
    a,
    b,
    c,
    hours,
    minutes;

    printf("Enter the time in hours since the power failure occurs >");
    scanf("%lf", &hours);

    printf("Enter the time in minutes since the power failure occurs >");
    scanf("%lf", &minutes);

    time = hours + (minutes / 60);
    a = time * time;
    b = 4 * a;
    c = time + 2;
    temp = b / c - 20;

    printf("Estimated temperature is %.2lf", temp);

    return 0;
}