#include <stdio.h>

int main() {
    
    int num1,
    num2 = 0;

    while (scanf("%d", &num1) != EOF) {
        num2 += num1;
    }
    printf("%d\n", num2);
    return 0;
}