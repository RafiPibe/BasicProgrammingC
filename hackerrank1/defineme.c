#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A;
    scanf("%d", &A);

    if(A > 0 && A % 2 == 0 && A < 10) {
        printf("Genap Satuan");
    } else if(A >= 10 && A % 2 == 0 && A < 100) {
        printf("Genap Puluhan");
    } else if(A > 0 && A % 1 == 0 && A < 10) {
        printf("Ganjil Satuan");
    } else if(A >= 10 && A % 1 == 0 && A < 100) {
        printf("Ganjil Puluhan");
    } else {
        printf("Out of bound");
    }
    
    return 0;
}