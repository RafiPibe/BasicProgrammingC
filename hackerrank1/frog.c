#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, AtoB, BtoC, CtoD, DtoE;

    scanf("%d %d %d %d %d", &n, &AtoB, &BtoC, &CtoD, &DtoE);

    if(n >= AtoB) {
        if(n >= BtoC) {
            if(n >= CtoD) {
                if(n >= DtoE) {
                    printf("YES HE CAN");
                } else {
                    printf("NO HE CAN'T");
                } 
            } else {
                printf("NO HE CAN'T");
            }
        } else {
            printf("NO HE CAN'T");
        }
    } else {
        printf("NO HE CAN'T");
    }

    return 0;
}