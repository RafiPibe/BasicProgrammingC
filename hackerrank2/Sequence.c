#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fibonacci(int reach);

int main() {
    int n, 
    reach;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &reach);
        printf("Sequence: ");

        fibonacci(reach);
        printf("\n");
    }
}

//this function is for the fibonacci algo
void fibonacci(int reach) {
    int a = 0,
    b = 1,
    c;

    //a will loop until it gets to the point where its = reach
    while (a <= reach) {
        printf("%d,", a);

        // a = 0, b = 1, and c = a + b, and so forth until it cap at reach
        
        c = a + b;
        a = b;
        b = c;
        
    }
}