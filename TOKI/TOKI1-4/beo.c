#include <stdio.h>
#include <string.h>

int main () {

    char yes[256];

    scanf("%[^\n]", yes);
    printf("%s\n", yes);
    
    return 0;
}