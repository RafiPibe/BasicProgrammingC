#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define STR_SIZE 205

typedef struct sentences_t{
    char kal[STR_SIZE];
    char kata[STR_SIZE][STR_SIZE];
} Sentences;


int main(){
    int n, x,
    i = 0, 
    flag = 0, 
    chicken = 0, duck;
    
    scanf("%d\n", &n);
    
    Sentences string[n];
    
    for (int i=0; i<n; i++) {
        scanf(" %[^\n]",string[i].kal);
    }
    
    while(i < n) {
        for(x = 0; x <= (strlen(string[i].kal)); x++) {
            if(string[i].kal[x] == ' '|| string[i].kal[x] == '\0') {
                string[i].kata[chicken][flag] = '\0';
                chicken++; 
                flag = 0;
            } else {
                string[i].kata[chicken][flag] = string[i].kal[x];
                flag++;
            }
        }
        
        flag = 0;
        chicken=0;
        i++;
    } 
    
    scanf("%d", &duck);
    int sentences[duck], word[duck];
    
    for(int i=0; i<duck; i++) {
        scanf("%d %d", &sentences[i], &word[i]);
    }

    i = 0;

    while(i < duck) {
        printf("%s ", string[sentences[i]-1].kata[word[i]-1]);
        i++;
    } 

    return 0;
}