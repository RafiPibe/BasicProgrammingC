#include <stdio.h>

int main() {

    int A;
    scanf("%d", &A);

    if(A > 0 && A % 2 == 0) {
        printf("%d", A);
    }

    return 0;
}