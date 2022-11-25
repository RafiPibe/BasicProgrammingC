#include <stdio.h>

void count(int N, int* arr) {
    int i = 0;
    int odd = 0;
    int even = 0;
    
    while (N != 0) {
        
        if (*(arr + i) % 2 == 0){
        even++;
        } else {
        odd++;
        }

    i++;
    N = N / 10;
    
    }
    printf("even : %d\n", even);
    printf("odd : %d\n", odd);
}

int main() {
    int N, 
    arr[10001], 
    temp;
    
    scanf("%d", &N);
    
    temp = N;
    int i = 0;
    
    while (temp != 0){
        arr[i] = temp % 10;
        temp = temp / 10;
        i++;
    }
    
    count(N, arr);
    
    return 0;
}

