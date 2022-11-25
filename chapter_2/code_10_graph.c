#include <stdio.h>

int main() {
    double x1, 
    y1, 
    x2, 
    y2, 
    slope, 
    xm, 
    ym, 
    slope_pb, 
    b;
    
    printf("enter x1 and y1 value > ");
    scanf("%lf %lf", &x1, &y1);

    printf("\nenter x2 and y2 value > ");
    scanf("%lf %lf", &x2, &y2);

    slope = (y2 - y1) / (x2 - x1);

    xm = x1 + (x2 - x1) / 2;
    ym = y1 + (y2 - y1) / 2;

    slope_pb = -(1.0/slope);

    b = ym - (slope_pb * xm);

    printf("\nso, y = %.2lfx - %.2lf", slope_pb, b);

    return 0;
}