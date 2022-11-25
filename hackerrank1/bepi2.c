#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;

    scanf("%d", &N);

    if(N >= 15 && N <= 35){
        printf("Special\n");
    } else if (N % 3 == 0 && N % 5 != 0 && N % 7 != 0) {
        printf("Be");
    } else if (N % 3 != 0 && N % 5 == 0 && N % 7 != 0) {
        printf("Pi");
    } else if (N % 3 != 0 && N % 5 != 0 && N % 7 == 0) {
        printf("Buzz");
    } else if (N % 3 == 0 && N % 5 == 0 && N % 7 == 0) {
        printf("BePiBuzz");
    } else if (N % 3 == 0 && N % 5 == 0 && N % 7 != 0) {
        printf("BePi");
    } else if (N % 3 == 0 && N % 5 != 0 && N % 7 == 0) {
        printf("BeBuzz");
    } else if (N % 3 != 0 && N % 5 == 0 && N % 7 == 0) {
        printf("PiBuzz");
    } else if(N >= 65 && N <= 90){
        printf("%d is not interesting. Bepi made it interesting '%c'\n", N, (char)N);
    } else if(N >= 97 && N <= 122){
        printf("%d is not interesting. Bepi made it interesting '%c'\n", N, (char)N);
    } else {
        printf("%d is not interesting.\n", N);
    }

    return 0;
}