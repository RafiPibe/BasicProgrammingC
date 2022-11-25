/*
Input :
desired grade
minimum avg
current avg
course percent

Output :
required grade to get desired grade
*/

#include <stdio.h>

int main() {

    double minimum_avg,
    current_avg,
    course_percent,
    final_percent,
    final_decimal,
    current_grade,
    grade_a,
    required_grade;
    char desired_grade;


    printf("Enter desired grade> ");
    scanf("%c", &desired_grade);

    printf("Enter minimum average required>");
    scanf("%lf", &minimum_avg);

    printf("Enter current average in course>");
    scanf("%lf", &current_avg);

    printf("Enter how much the final counts>");
    scanf("%lf", &final_percent);

    final_decimal = final_percent / 100;
    current_grade = current_avg * (1 - final_decimal);
    grade_a = minimum_avg - current_grade;
    required_grade = grade_a * (1 / final_decimal);

    printf("You need a score of %.2lf on the final to get %c", required_grade, desired_grade);


return 0;
}