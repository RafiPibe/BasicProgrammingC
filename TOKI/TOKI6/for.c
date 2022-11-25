#include <stdio.h>

int main() {
    
    int a, b;
    scanf("%d", &a);

    int result = 0;

    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        result += b;
    }

    printf("%d\n" , result);
    return 0;
}