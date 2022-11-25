/*







*/
#include <stdio.h>

int main() {
  double volume, minutes, rate, hours;
  
  scanf("%lf", &volume);
  scanf("%lf", &minutes);
  
  hours = minutes / 60;
  rate = volume / hours;
  
  printf("\nVTBI: %lf ml\n", volume);
  printf("Rate: %lf ml/h\n", rate);

  return 0;
}
