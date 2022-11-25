#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j,
    n, k,
    flag;

    scanf("%d", &n);

    for(j = 0; j <= n; j++) {
        flag = 1;
        scanf("%d", &k);
        
        int arr1[k],
        arr2[k];

        for(i = 0; i < k - 1; i++) {
	        scanf("%d", &arr1[i]);
        }

        for(i = 0; i < k; i++) {
	        scanf("%d", &arr2[i]);
        }

        for(i = 0; i < k; i++) {
	        if (arr1[i] != arr2[i]) {
                printf("%d\n", arr2[i]);
                break;
                flag = 1;
            }
        } if(flag != 1) printf("%d\n", arr2[k]);
    } 
    
    return 0;
}