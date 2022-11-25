#include <stdio.h>
#include <string.h>

struct Worker {
    char name[101];
    char id[101];
    int age;
    char city[101];
    char phone[101];
    char dept[101];
    int salary;
};

void bubblesort(struct Worker *array, int t) {
    struct Worker tmp[1];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t - 1; j++)
        {
            if (strcmp(array[j].city, array[j + 1].city) > 0)
            {
                tmp[0] = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp[0];
            }
        }
    }
}

int main(void)
{
    int t;

    printf("Enter the number of workers: ");

    scanf("%d", &t);
    
    struct Worker array[t];

    bubblesort(array, t);

}