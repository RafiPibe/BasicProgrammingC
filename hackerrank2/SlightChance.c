#include <stdio.h>

#define ARR_SIZE 100001

int main() {
    int n, 
    input, 
    result = 0, 
    array[ARR_SIZE] = {0}, 
    modusMax = 0;
    
    scanf("%d", &n);
    
    //scanning the 2nd integer 
    for (int i = 0; i < n; i++){
        scanf("%d", &input);
        array[input]++;
    }
    
    //search the modus
    for (int i = 0; i < ARR_SIZE; i++){
        if (array[i] >= modusMax){
            modusMax = array[i];
            result = n - modusMax;
        }
    }
    printf("%d\n", result);
    
    return 0;
}