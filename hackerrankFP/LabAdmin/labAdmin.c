#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define COMPUTER_NUM 51

int main() {
    int computers, 
    switcher, 
    computerConnected, 
    i, num;

    bool computerOn[COMPUTER_NUM] = {false};

    scanf("%d %d", &computers, &switcher);

    for(i = 0; i < switcher; i++){
        scanf("%d", &computerConnected);

        for(int j = 0; j<computerConnected; j++){
            scanf("%d", &num);
            computerOn[num] = !computerOn[num];
        }
    }

    bool ifComputerOn = true;
    
    for(i = 1; i <= computers; i++){
        if (computerOn[i] == false){
            printf("NO\n");

            ifComputerOn = false;
            break;
        }
    }

    if (ifComputerOn){
        printf("YES\n");
    }

    return 0;
}