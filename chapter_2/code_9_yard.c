/*
Input :
Length + Width = Area (yard)
Length + Width = Area (house)

Output :
the estimated time is "what" a sec
*/
#include <stdio.h>

int main() {

    double yard_length, 
    yard_width,
    yard_area,
    house_length,
    house_width,
    house_area,
    final_area,
    est_time;

    printf("Enter the length and width of the yard (feet) > ");
    scanf("%lf %lf", &yard_length, &yard_width);

    printf("Enter the length and width of the house (feet) > ");
    scanf("%lf %lf", &house_length, &house_width);

    yard_area = yard_length * yard_width;
    house_area = house_length * house_width;

    final_area = yard_area - house_area;
    est_time = final_area / 2;

    printf("The estimated time is %.0lf feet / seconds", est_time);

    return 0;
}