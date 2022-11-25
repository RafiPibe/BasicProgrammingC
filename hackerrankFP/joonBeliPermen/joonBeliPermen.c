#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int candyMax = 0;
int candyCurrent = 0;

void passOver(int candy[81][81], int i, int j, int m, int n, int color);

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    return b;
}

int main() {
    int m, n,
    i, j,
    candy[81][81];

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &candy[i][j]);
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            candyCurrent = 0;
            passOver(candy, i, j, m, n, candy[i][j]);

            candyMax = max(candyMax, candyCurrent);
        }
    }

    printf("%d\n", candyMax);
}

void passOver(int candy[81][81], int i, int j, int m, int n, int color) {
    if(i < 0 || i >= m || j < 0 || j >= n) {
        return;
    }

    if(candy[i][j] != color) {
        return;
    }

    if(candy[i][j] == -1) {
        return;
    }

    candy[i][j] = -1;
    candyCurrent += 1;

    passOver(candy, i + 1, j, m, n, color);
    passOver(candy, i - 1, j, m, n, color);
    passOver(candy, i, j + 1, m, n, color);
    passOver(candy, i, j - 1, m, n, color);
}