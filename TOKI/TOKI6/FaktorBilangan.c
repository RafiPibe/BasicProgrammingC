#include <stdio.h>

int main() {

    int a;

    scanf("%d", &a);

    for(int i = a; i > 0; i--) {
        if(a % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}