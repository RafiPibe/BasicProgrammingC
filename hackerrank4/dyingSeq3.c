#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
  
void sort(int n, int* ptr) {
   int i, 
   j,
   temp;

   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
         if (*(ptr + i) > *(ptr + j)) {
            temp = *(ptr + i);

            *(ptr + i) = *(ptr + j);
            *(ptr + j) = temp;
         }
      }
   }

   for (i = 0; i < n; i++)
      printf("%d ", *(ptr + i));
}
  
int main() {
   int n;
   scanf("%d", &n);
    
   int i,
   arr[n];

   for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
   } 
   
   if(n == 0) {
      printf("NULL");
   } else {
      sort(n, arr);
   }
  
   return 0;
}