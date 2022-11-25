#include <stdio.h>
#include <math.h>

double calculatePayment(int monthly_interest, int borrowed, int payments){
  double calculatedpayment = (monthly_interest * borrowed) / (1 - pow((1 + monthly_interest), (payments * -1)));
  return calculatedpayment;
}

int main(){
  int purchase_price, down_payment, amount_borrowed, total_number_of_payments;
  double annual_interest_rate, monthly_interest_rate, payment; 
  
  double calculatePayment(int monthly_interest, int borrowed, int payments);
  
  printf("Enter the price of the car > ");
  scanf("%d", &purchase_price);
  
  printf("Enter the amount of your down payment > ");
  scanf("%d", &down_payment);
  
  printf("Enter the annual interest rate > ");
  scanf("%lf", &annual_interest_rate);
  
  monthly_interest_rate = annual_interest_rate / 12;
  
  printf("Enter the total number of payments > ");
  scanf("%d", &total_number_of_payments);

  amount_borrowed = purchase_price - down_payment;
  
  payment = calculatePayment(monthly_interest_rate, amount_borrowed, total_number_of_payments);
    
  printf("Amount Borrowed\t:$%d\n", amount_borrowed);
  printf("Monthly Payment\t:$%d", payment);
  
  return 0;
}
