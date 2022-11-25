#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14

int main() {

    double sphereAmount, sphereRadius, sphereVolume, sphereTotal,
    cubeSide, cubeVolume,
    boxLenght, boxWidth, boxHeight, boxVolume,
    cylinderRadius, cylinderHeight, cylinderVolume;

    scanf("%lf %lf\n", &sphereRadius, &sphereAmount);
    scanf("%lf\n", &cubeSide);
    scanf("%lf %lf %lf\n", &boxLenght, &boxWidth, &boxHeight);
    scanf("%lf %lf\n", &cylinderRadius, &cylinderHeight);

    sphereVolume = (4.0 / 3.0) * PI * pow(sphereRadius, 3.0);
    sphereTotal = sphereVolume * sphereAmount;
    cubeVolume = pow(cubeSide, 3.0);
    boxVolume = boxHeight * boxLenght * boxWidth;
    cylinderVolume = (PI * pow(cylinderRadius, 2.0)) * cylinderHeight;

    if(sphereTotal <= cubeVolume) {
        printf("Cube fits!\n");
    } if(sphereTotal <= boxVolume) {
        printf("Box fits!\n");
    } if(sphereTotal <= cylinderVolume) {
        printf("Cylinder fits!\n");
    } if(sphereTotal > cubeVolume && sphereTotal > boxVolume && sphereTotal > cylinderVolume){
        printf("Aw nothing fits D:!\n");
    }

    return 0;
}
