#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int carTotal, carPassed,
    carPassedDef, timeRemaining, 
    M, N, T,
    lightRed = 20,
    lightYellow = 5,
    lightGreen = 60,
    lightGo = lightYellow + lightGreen,
    lightTotal = lightRed + lightYellow + lightGreen;

    scanf("%d %d %d", &M, &N, &T);

    carTotal = M + N + 1; //1 mobil kita sendiri

    if(T > lightTotal) {
        carPassedDef = floor(T / lightTotal);
        carPassedDef *= 12;
        timeRemaining = T % lightTotal;

        if (timeRemaining > lightGo) {
            timeRemaining -= lightGo;
            timeRemaining = floor(timeRemaining / lightYellow);
            carPassed = carPassedDef + timeRemaining;

            if (carPassed > M) {
                printf("YES! ");
            } else {
                printf("NO! ");
            }

            if (carTotal - carPassed <= 0) {
                printf("0\n");
            } else {
                printf("%d\n", carTotal - carPassed);
            }
        } else if (timeRemaining <= lightGo) {
            if(carPassedDef > M) {
                printf("YES! ");
            } else {
                printf("NO! ");
            }

            if(carTotal - carPassedDef <= 0) {
                printf("0\n");
            } else {
                printf("%d\n", carTotal - carPassedDef);
            }
        }
    } else if(T <= lightTotal && T > lightGo) {
        carPassedDef = floor((T - lightGo) / lightYellow);

        if(carPassedDef > M) {
                printf("YES! ");
            } else {
                printf("NO! ");
            }

        if(carTotal - carPassedDef <= 0) {
            printf("0\n");
        } else {
            printf("%d\n", carTotal - carPassedDef);
        }
    } else if(T <= lightGo) {
        printf("NO! %d\n", carTotal);
    }
}