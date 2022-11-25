#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primeCheck (int n);
int binaryToDecimal(int num);

int main () {
    int k, n,
    i, j,
    bin, bound;
    char code[52] ={"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"},
    str[10002];

    scanf(" %d", &k);

    k = k % 52;
    
    while(1) {
        scanf("%d", &bin);
        if (bin == -1) break;

        n = binaryToDecimal(bin);
        n = primeCheck(n);

        if (n){
            scanf(" %[^\n]s", str);

            bound = strlen(str);
            for (i = 0; i < bound; i ++){
                for (j = 0; j < 52; j ++){
                    if (str[i] == code[j]){
                        if (j + k > 51){
                            str[i] = code[j + k - 52];
                            break;
                        } else {
                            str[i] = code[j + k];
                            break;
                        }
                    }
                }
            } printf("Mumun: %s\n", str);
        } else {
            scanf(" %[^\n]s", str);

            bound = strlen(str);
            for (i = 0; i < bound; i ++){
                for (j = 0; j < 52; j ++){
                    if (str[i] == code[j]){
                        if (j - k < 0){
                            str[i] = code[j - k + 52];
                            break;
                        } else {
                            str[i] = code[j - k];
                            break;
                        }
                    }
                }
            } printf("Robot: %s\n", str);
        }
    }

}

int binaryToDecimal(int num) {
    int lastDigit,
    decimalValue = 0,
    base = 1;

    while (num) {
        lastDigit = num % 10;
        num /= 10;
        decimalValue += lastDigit * base;
        base = base * 2;
    }

    return decimalValue;
}

int primeCheck (int n) {
    int i,
    flag = 1;

    if (n == 1){
        flag = 0;
    } else {
        for (i = 2; pow(i, 2) <= n; i ++){
            if (n % i == 0){
                flag = 0;
                break;
            } else {
                flag = 1;
            }
        }
    }
    return flag;
}