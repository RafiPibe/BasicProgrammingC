#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primeCheck(int num){
    int i,
    flag = 0;
    
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(num == 1) flag = 1;
    return flag;
}

int main() {
    int testCase,
    p, h, //p = amount of employee //h = amount of days
    i, j;
    unsigned long calculation;

    scanf("%d", &testCase);
    
    for(i = 0; i < testCase; i++) {
        scanf("%d %d", &p, &h);
        
        calculation = p;

        for(j = 2; j <= h; j++) {
            if(primeCheck(j) == 0) {
                calculation = (calculation * p) % 1000000007;
            } else {
                calculation = (calculation * (p - 1)) % 1000000007;
            }
        } printf("%lu\n", calculation % 1000000007);
    }
}