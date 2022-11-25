#include <stdio.h>

int main() {

    int student,
    student_left = 30,
    class;

    printf("Insert number of students enrolling > ");
    scanf("%d", &student);

    class = student / 30;
    student_left = student % class;

    printf("number of students > %d\n", student);
    printf("number of class > %d\n", class);
    printf("student left > %d", student_left);
   

    return 0;
}