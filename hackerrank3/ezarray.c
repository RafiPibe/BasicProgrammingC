#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n = 0;

void sum(int num) {
    int asciiAlphabet[] = {65,66,67,68,69,70,71,72,73,74,74,75,76,77,78,79,80,81,82,82,83,84,85,86,87,88,89,90}; //this is the ASCII value of A - Z (capital)
    
    if(num == 0) {
        return;
    }

    if(num % 26 == 0 && num > 27) {

    }

}

int main() {
    int num;
    scanf("%d", &num);

    sum(num);

    return 0;
}