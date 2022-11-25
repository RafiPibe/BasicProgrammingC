#include <stdio.h>
#include <math.h>

double speedRatio(int maxSpeed, int minSpeed) {
  double MaxMin = (double)(maxSpeed / minSpeed);

  double ratio = pow(MaxMin, 1.0 / 5.0);

  return ratio;
}

int main() {
    int minSpeed,
    maxSpeed;
    double ratio;

    printf("enter minimum speed (rpm) > ");
    scanf("%d", &minSpeed);

    printf("enter maximum speed (rpm) > ");
    scanf("%d", &maxSpeed);

    ratio = speedRatio(maxSpeed, minSpeed);

    printf("Ratio between successive speeds of a six-speed gearbox with\n"
            "Max speed of %d rpm\n"
            "Min speed of %d rpm\n"
            "ratio is %.2lf",
            maxSpeed, minSpeed, ratio);

return 0;
}