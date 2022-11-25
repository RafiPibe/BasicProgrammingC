#include <stdio.h>

int main() {
    double monthlyPayment,
    hourlyIncome;

    printf("Enter monthly payment ($)> ");
    scanf("%lf", &monthlyPayment);

    printf("Enter hourly income ($)> ");
    scanf("%lf", &hourlyIncome);

    double workHours = monthlyPayment / hourlyIncome;

    printf("You need to work %.2lf hours to pay your monthly payment", workHours);

    return 0;
}