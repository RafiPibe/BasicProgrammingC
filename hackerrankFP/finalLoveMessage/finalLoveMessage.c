#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define STR_SIZE 1001

char *whiteSpace(char *arr) {
    int i = 0, 
    j = 0;
    
    while (arr[i]) {
        if (arr[i] != ' ') arr[j++] = arr[i];
        i++;
    }
    
    arr[j] = '\0';
    return arr;
}

int main() {
    char string[STR_SIZE];

    while (scanf(" %[^\n]", string)!= EOF) {

        if (strcmp(string, "exit") == 0) {
            break;
        }

        whiteSpace(string);
        int n = strlen(string),
        temp;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (string[i] > string[j]) {
                    temp = string[i];

                    string[i] = string[j];
                    string[j] = temp;
                }
            }
        }

        printf("%s\n", string);
    }

    return 0;
}