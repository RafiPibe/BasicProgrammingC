#include <stdio.h>
#include <math.h>

#define PI 3.14159

double gosper(int n) {

    double inSqrt = (2 * (double)n + (1 / 3)) * PI;
    double nFactor = pow(n, n) * exp(-1 * n) * sqrt(inSqrt);

    return nFactor;
}

int main() {
    int n;

    printf("enter n > ");
    scanf("%d", &n);

    double nFactor = gosper(n);

    printf("%d! equals approximately %.5lf", n, nFactor);

    return 0;
}