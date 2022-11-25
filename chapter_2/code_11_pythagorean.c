#include <stdio.h>

int main(){
  int m, n, side1, side2, hypotenuse;
  
  printf("Enter an integer>\n");
  scanf("%d", &m);
  
  printf("Enter another integer>\n");
  scanf("%d", &n);
  
  side1 = (m * m) - (n * n);
  side2 = 2 * (m * n);
  
  hypotenuse = (m * m) + (n * n);
  
  printf("The Pythagorean triple of these integers is %d, %d and %d\n", side1, side2, hypotenuse);
}