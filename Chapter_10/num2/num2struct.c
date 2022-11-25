#include <stdio.h>
#include <string.h>

struct Worker
{
    char name[32];
    char id[32];
    int age;
    char city[28];
    char phone[16];
    char dept[12];
    int salary;
};

// not efficient and should never be used
void bubblesort(struct Worker *array, int t)
{
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
    getchar();
    struct Worker array[t];

    for (int i = 0; i < t; i++)
    {
        printf("===============\n");
        printf("Worker #%d\n", i + 1);
        printf("Enter worker's name: ");
        scanf("%[^\n]", array[i].name);
        getchar();
        printf("Enter worker's ID: ");
        scanf("%[^\n]", array[i].id);
        getchar();
        printf("Enter worker's age: ");
        scanf("%d", &array[i].age);
        getchar();
        printf("Enter worker's home city: ");
        scanf("%[^\n]", array[i].city);
        getchar();
        printf("Enter worker's phone number: ");
        scanf("%[^\n]", array[i].phone);
        getchar();
        printf("Enter worker's department: ");
        scanf("%[^\n]", array[i].dept);
        getchar();
        printf("Enter worker's salary: ");
        scanf("%d", &array[i].salary);
        getchar();
    }

    bubblesort(array, t);

    for (int i = 0; i < t; i++)
    {
        printf("%-30s %s\n", array[i].name, array[i].city);
    }
}