#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int C, 
    i, 
    j, 
    N, 
    flag;

    scanf("%d", &C);

    //c is what's inside the array with the max of 100
    char Fi[C][101];
    int Si[C];

    for(i = 0; i < C; i++) {
        scanf("%d", &Si[i]); 
        scanf("%s", &Fi[i]);
        //Si and Fi array changed to i, since i < C, so it will stop the looping once it's on C -1
    }

    scanf("%d", &N);

    
    for(j = 1; j <= N; j++) {
        flag = 0; //we always assume that the number is not divisible

        
        for(i = 0; i < C; i++) {
            if(j % Si[i] == 0) {
                printf("%s", Fi[i]);
                flag = 1; //for the numeral that CAN be divided up
            }

        } if(!flag) printf("%d", j); 
        /*!flag right here is to show false
         if the flag is still 0 (means the number is not divisible), flip the value and print the number itself
        */

        printf("\n");
    }
        
    return 0;
}