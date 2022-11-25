#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int vowels = 0,
    consonants = 0,
    uppercase = 0,
    lowercase = 0;
    char string[101],
    *letters;
    
    fgets(string, 101, stdin);
    letters = string;
    
    while(*letters) { 
    	if((*letters >= 65 && *letters <= 90) || (*letters >= 97 && *letters <= 122)) 
            if(*letters == 65 || *letters == 97 || *letters == 73 || *letters == 105 ||
            *letters == 85 || *letters == 117 || 
            *letters == 69 || *letters == 101 || *letters == 79 || *letters == 111) {
		        vowels++;
            } else {
                consonants++;
            }

        if(*letters >= 65 && *letters <= 90) {
                uppercase++;
            } else if(*letters >= 97 && *letters <= 122) {
                lowercase++;
            } letters++;
    
    }
    
    printf("Vowel Number: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);
    printf("Total Uppercase: %d\n", uppercase);
    printf("Total Smallcase: %d\n", lowercase);
       
     return 0; 
}