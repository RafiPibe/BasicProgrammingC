#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned long ulong;
typedef unsigned int uint;

int main() {
    uint m, n,
    i, j,
    primeLooping, 
    primeNum, 
    flag,
    counter = 0;
    ulong temp = 0;

    scanf("%d %d", &m, &n);

    for(i = m; i < n + 1; i++) {
        flag = 1;
        primeNum = 1;

        for(primeLooping = 2; primeLooping <= sqrt(i); primeLooping++) {
            if(i % primeLooping == 0) {
                flag++;

                if(flag > 1) {
                    primeNum = 0;
                    break;
                } else {
                    continue;
                }
            }
        }

        if(primeNum == 0) {
            continue;
        }

        for(j = m; j < n + 1; j++) {
            flag = 1;
            primeNum = 1;

            for(primeLooping = 2; primeLooping <= sqrt(j); primeLooping++) {
                if(j % primeLooping == 0){
                    flag++;
                    if(flag > 1){
                        primeNum = 0;
                        break;
                    } else {
                        continue;
                    }
                }
            }
            
            if(primeNum == 0) {
                continue;
            }

            if(j < 10) {
                temp = i * 10 + j;
            } else if(j > 10 && j < 101) {
                temp = i * 100 + j;
            } else if(j > 100 && j < 1001) {
                temp = i * 1000 + j;
            } else if(j > 1000 && j <= 10000) {
                temp = i * 10000 + j;
            }

            flag = 1;
            primeNum = 1;

            for(primeLooping = 2; primeLooping <= sqrt(temp); primeLooping++){
                if(temp % primeLooping == 0){
                    flag++;

                    if(flag > 1){
                        primeNum = 0;
                        break;
                    } else {
                        continue;
                    }
                }
            }
            
            if(primeNum){
                printf("%d %d\n", i, j);
                counter++;
            } else {
                continue;
            }
        }
    } if(counter < 1) printf("TIDAK ADA");
}