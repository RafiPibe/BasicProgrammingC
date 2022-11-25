#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n %1 == 0 && n %n == 0){
        if(n >= 10 && n %2 != 0 && n %3 != 0 && n %5 !=0 && n %7 != 0){
        printf("IT IS A PRIME");
        } else if(n < 10 && n != 4 && n != 6 && n != 8 && n != 9){
            printf("IT IS A PRIME");
        } else{
            printf("IT IS NOT A PRIME");
        }
    } else{
        printf("IT IS NOT A PRIME");
    }

    return 0;
}