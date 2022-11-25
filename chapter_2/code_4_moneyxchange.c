#include <stdio.h>

int main  () {

    double GBP_Rate = (0.65),
    USD,
    GBP_Final;


    printf("Enter the value of the USD >\n");
    scanf("%lf", &USD);
    
    GBP_Final = (USD * GBP_Rate);

    printf("The GBP you'll be getting is %.2lf", GBP_Final);



    return 0;
}