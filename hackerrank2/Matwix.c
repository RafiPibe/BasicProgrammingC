#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,
    row,
    cowwumn;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &row, &cowwumn);
        int matwix[row][cowwumn];

        
        for(int j = 0; j < row; j++) {
            for(int k = 0; k < cowwumn; k++) {
                scanf("%d", &matwix[j][k]);
            }
        }

        for(int i = 0; i < cowwumn; i++) {
            for(int j = 0; j < row; j++) {
                printf("%d", matwix[i] [j]);
                if(j < row -1) printf(" ");
            }
            printf("\n");
        }
    }
}
