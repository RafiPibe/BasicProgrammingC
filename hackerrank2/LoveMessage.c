#include <stdio.h>

int main ()
{
    int D, 
    SN, 
    i, 
    j;

    char M[1001];
    
    scanf("%d", &D);
    
    if(D>=0 && D<=30)
    {
        for (j = 0; j < D; j++)
        {
            scanf("%d\n", &SN);
            if (SN >=0 && SN <= 20)
            {
                scanf("%[^\n]%*c", &M);
                for (i = 0; i<1001; i++)
                {
                    if (M[i] >= 'a' && M[i] <= 'z')
                    {
                        M[i] = (M[i] + SN - 97) %26 + 97;
                    }
                    if (M[i] >= 'A' && M[i] <= 'Z')
                    {
                        M[i] = (M[i] + SN - 65) %26 + 65;
                    }
                }
                printf("%s\n", M);
            }
        }
    }
    

    return 0;
}