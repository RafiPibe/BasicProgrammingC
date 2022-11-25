#include <stdio.h>
#include <string.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int o, p;
    o = a/b;
    p = a%b;
    
    printf("masing-masing %d\nbersisa %d\n", o, p);

    return 0;
}