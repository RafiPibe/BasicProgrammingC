#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int M, N, T;
    int carTotal, carPassed;
    int defCarPassed, remainTime;
    
    scanf("%d %d %d", &M, &N, &T);
    
    carTotal = M + N + 1 ;
    
    if (T > 85) {
        defCarPassed = floor(T / 85) ;
        defCarPassed *= 12 ;
        remainTime = T % 85 ;
        
        if (remainTime > 25) {
            remainTime -= 25 ;
            remainTime = floor(remainTime/5) ;
            carPassed = defCarPassed + remainTime ;
            
            if(carPassed > M){
                printf("YES! ");
            }
            else{
                printf("NO! ");
            }
            
            if (carTotal - carPassed <= 0) {
                printf("0\n");
            }
            else {
                printf("%d\n", carTotal - carPassed);
            }
        }
        else if (remainTime <= 25) {
            
            if(defCarPassed > M){
                printf("YES! ");
            }
            else{
                printf("NO! ");
            }
           
            if (carTotal - defCarPassed <= 0) {
                printf("0\n");
            }
            
            else {
                printf("%d\n", carTotal - defCarPassed);
            }
        }
    }
    else if (T <= 85 && T > 25) {
        defCarPassed = floor((T-25) / 5);
        
        if(defCarPassed > M){
            printf("YES! ");
        }
        else{
            printf("NO! ");
        }
        
        if (carTotal - defCarPassed <= 0) {
            printf("0\n");
        }
        else {
            printf("%d\n", carTotal - defCarPassed);
        }
    }
    else if (T <= 25) {
        printf("NO! %d\n", carTotal);
    }
    
    return 0;
}