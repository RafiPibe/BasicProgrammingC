#include <stdio.h>
#include<math.h>

int main() {
    double N;
    scanf("%lf", &N);

    int t = trunc(N);
     
    if(N < 0 && N != t){

        printf("%d %d", t-1, t);

    } else if(N > 0 && N != t){

        printf("%d %d", t, t+1);
    } else if (t == N){

        printf("%d %d", t, t);     
    }

}