#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int carTotal, carPassed,
    carPassedDef, timeRemaining,
    M, N, T;
    
    scanf("%d %d %d", &M, &N, &T);
    
    carTotal = M + N + 1; //1 mobil kita sendiri
    
    if (T > 85) {
        carPassedDef = floor(T / 85);
        carPassedDef *= 12;
        timeRemaining = T % 85;
        
        if (timeRemaining > 25) {
            timeRemaining -= 25;
            timeRemaining = floor(timeRemaining / 5);
            carPassed = carPassedDef + timeRemaining;
            
            if(carPassed > M){
                printf("YES! ");
            } else{
                printf("NO! ");
            }
            
            if (carTotal - carPassed <= 0) {
                printf("0\n");
            } else {
                printf("%d\n", carTotal - carPassed);
            }
        } else if (timeRemaining <= 25) {
            
            if(carPassedDef > M){
                printf("YES! ");
            } else{
                printf("NO! ");
            }
           
            if (carTotal - carPassedDef <= 0) {
                printf("0\n");
            } else {
                printf("%d\n", carTotal - carPassedDef);
            }
        }
    } else if (T <= 85 && T > 25) {
        carPassedDef = floor((T-25) / 5);
        
        if(carPassedDef > M){
            printf("YES! ");
        } else{
            printf("NO! ");
        }
        
        if (carTotal - carPassedDef <= 0) {
            printf("0\n");
        } else {
            printf("%d\n", carTotal - carPassedDef);
        }
    } else if (T <= 25) {
        printf("NO! %d\n", carTotal);
    }
}