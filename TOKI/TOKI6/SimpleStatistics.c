#include <stdio.h>

int main() {
    int n,
    max = -100001,
    min = 10001;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int c;
        scanf("%d", &c);

        if(c < min) {
            min = c;
        }

        if(c > max) {
            max = c;
        }
    }
    
    printf("%d %d\n", max, min);
    
    return 0;
}