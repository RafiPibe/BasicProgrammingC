#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n %1 == 0 && n %n == 0){
        if(n >= 10 && n <= 1000 && n % 2 !=0 && n % 3!= 0 && n % 5!= 0 && n % 7!= 0 && 
        n != 121 && n != 169 && n != 289 && n != 361 && n != 529 && n != 729 && n != 841 & n != 961) {
            printf("IT IS A PRIME");
        } else if(n < 9 && n >= 2 && n != 4 && n != 6 && n != 8 && n != 9) {
            printf("IT IS A PRIME");
        } else {
            printf("IT IS NOT A PRIME");
        }
    } else{
        printf("IT IS NOT A PRIME");
    }
}