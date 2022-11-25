#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%i", &n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < (2 * n + 1) / 2; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                for (int l = 0; l < (2 * n + 1) / 2 - j; l++) printf(" ");
                for (int l = 0; l < (2 * j + 1) / 2; l++) printf("%i", l);
                printf("%i", j);
                for (int l = (2 * j + 1) / 2 - 1; l >=0 ; l--) printf("%i", l);
                for (int l = 0; l < (2 * n + 1) / 2 - j; l++) printf(" ");
            }
            printf("\n");
        }

        for (int j = 0; j < n; j++) 
        {
            for (int k = 0; k < (2 * n + 1) / 2; k++)
            {
                printf("%i", k);
            }
            printf("%i", n);
            for (int k = (2 * n + 1) / 2 - 1; k >= 0; k--)
            {
                printf("%i", k);
            }
        }
        printf("\n");

        for (int j = (2 * n + 1) / 2 - 1; j >= 0; j--) 
        {
            for (int k = 0; k < n; k++) 
            {
                for (int l = 0; l < (2 * n + 1) / 2 - j; l++) printf(" ");
                for (int l = 0; l < (2 * j + 1) / 2; l++) printf("%i", l);
                printf("%i", j);
                for (int l = (2 * j + 1) / 2 - 1; l >=0 ; l--) printf("%i", l);
                for (int l = 0; l < (2 * n + 1) / 2 - j; l++) printf(" ");
            }
            printf("\n");
        }
    }
}