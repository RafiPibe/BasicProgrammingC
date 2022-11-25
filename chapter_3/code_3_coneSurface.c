#include <stdio.h>

#define PI 3.14159

double surfaceArea(double slantHeight, double radius) {
    double area;

    area = PI * radius * (radius + slantHeight);

    return area;
}

int main() {
    double slantHeight,
    radius,
    surface;
    
    printf("Enter the radius of the base of the circle (cm) > ");
    scanf("%lf", &radius);

    printf("Enter the slant height of the cone (cm) > ");
    scanf("%lf", &slantHeight);

    surface = surfaceArea(radius, slantHeight);

    printf("the surface area of the cone is %.2lf cm^2", surface);

    return 0;
}