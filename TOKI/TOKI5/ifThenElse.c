#include <stdio.h>

int main() {

    int A;
    scanf("%d", &A);

    if(A > 0) {
        printf("positif");
    } else if(A == 0) {
        printf("nol");
    } else if(A < 0) {
        printf("negatif");
    }

    return 0;
}