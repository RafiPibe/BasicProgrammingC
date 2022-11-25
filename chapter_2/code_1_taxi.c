#include <stdio.h>

#define TAXI_RATE 1.50

int main() {

    double beginning, ending, taxi_fare;

    printf("enter beginning of odometer >\n");
    scanf("%lf", &beginning);

    printf("enter ending of odometer >\n");
    scanf("%lf", &ending);

    double travel_distance = ending - beginning;

    taxi_fare = travel_distance * TAXI_RATE;

    printf("The fare is %.2lf", taxi_fare);

    return 0;
}