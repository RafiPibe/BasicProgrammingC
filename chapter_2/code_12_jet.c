/*
v = velocity (km/h)
a = acceleration
t = time
s = distance (m)

v = at
s = (a(t * t)) / 2
*/

#include <stdio.h>

int main() {

    double velocity,
    acceleration,
    time,
    distance;

    //enter the velocity in m/s
    printf("Enter velocity > ");
    scanf("%lf", &velocity);

    //enter the distance in meter
    printf("Enter distance > ");
    scanf("%lf", &distance);

    //change the velocity from km/h to m/s
    velocity = velocity * 5/18;
    acceleration = velocity / (2 * distance);
    time = velocity / acceleration;

    printf("The acceleration of the jet is %lf m/s with the speed of %lf seconds", acceleration, time);

    return 0;
}