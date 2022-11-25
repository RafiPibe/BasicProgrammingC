#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void binaryConvert(unsigned long num) { //unsigned long value is called from the main integer
    if (num == 0) {
        return; 
    } else {
        binaryConvert(num / 2);
        printf("%d", num % 2);
        /*
        the formula of binary is to divide it by 2 and then get the leftover value
        */
    }
    //because this is void, so there is no return
}

int main() {
    unsigned long num;
    scanf("%lu", &num); //%lu is used because the integer is an unsigned long

    binaryConvert(num); //call the function "binaryConvert" with num
	return 0;
}

//unsigned is use to make the value a positive value (never negative)