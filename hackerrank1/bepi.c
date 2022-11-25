#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double a,
    b = 0;
    scanf("%lf", &a);

    if(a >= 15 && a <= 35) {
        printf("Special");
        return 0;
    }

    if((int)a % 3 == 0) {
        printf("Be");
        b = 1;
    }

    if((int)a % 5 == 0) {
        printf("Pi");
        b = 1;
    }

    if((int)a % 7 == 0) {
        printf("Buzz");
        b = 1;
    }

    if(b = 0) {
        printf("%lf is not interesting.", a);
        // if((a >= 'a' && <='z' || a >= 'A' && n <= 'Z')) {
        //     printf("Bepi made it interesting '%c'", (char)a);
        // }
    }

    return 0;
}