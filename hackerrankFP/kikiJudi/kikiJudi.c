#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int n, int* ptr) {
   	int i, 
   	j,
   	temp,
	count = 0;

   	for (i = 0; i < n - 1; i++) {
      	for (j = 0; j < n - i - 1; j++) {
         	if (*(ptr + j) > *(ptr + j + 1)) {
            	temp = *(ptr + j);

            	*(ptr + j) = *(ptr + j + 1);
            	*(ptr + j + 1) = temp;
				count++;
         	}
      	}
   	} printf("minimal pertukaran : %d\n", count);
}

int main() {
	int n;

   	while(scanf("%d", &n)!= EOF) {
   		int i,
   		arr[n];
		
		if(n <= 0) break;

   		for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
   		} 
	
		sort(n, arr);
	}
	
	return 0;
}
