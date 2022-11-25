#include <stdio.h>

int main() {

    int A;
    scanf("%d", &A);

    if(A > 0 && A < 10) {
        printf("satuan");
    } else if(A >= 10 && A < 100) {
        printf("puluhan");
    } else if(A >= 100 && A < 1000) {
        printf("ratusan");
    } else if(A >= 1000 && A < 10000) {
        printf("ribuan");
    } else if(A >= 10000 && A < 100000) {
        printf("puluhribuan");
    }

    return 0;
}