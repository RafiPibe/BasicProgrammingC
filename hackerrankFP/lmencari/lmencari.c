#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int n,
    k,
    sum = 0,
    missing;

    scanf("%d", &k);
	scanf("%d", &n);

    int i, j,
	arr[n - 1];
	
    for(j = 0; j <= k; j++) {
        for(i = 0; i < n - 1; i++) {
	        scanf("%d", &arr[i]);
	        sum = sum + arr[i];
	    }
    }
	

	missing = (n * (n + 1)) / 2 - sum;
	printf("%d", missing);

    return 0;
}