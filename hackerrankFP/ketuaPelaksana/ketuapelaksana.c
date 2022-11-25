#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct teamData {
    char name[101];
    int teamA;
    int teamB;
    int teamC;
    int teamSum;
} teamData;

int main() {
    int n;
    int i, j, k;
    scanf("%d", &n);
    teamData teamArr[n], temp;

    for(i = 0; i < n; i++) {
        scanf("%s",teamArr[i].name);
        scanf("%d",&teamArr[i].teamA);
        scanf("%d",&teamArr[i].teamB);
        scanf("%d",&teamArr[i].teamC);
        teamArr[i].teamSum = teamArr[i].teamA + teamArr[i].teamB + teamArr[i].teamC;
    }

    for(j = 0; j < n - 1; j++) {
        for(k = 0; k < n - 1; k++) {
            if(teamArr[k + 1].teamSum > teamArr[k].teamSum) {
                temp = teamArr[k + 1];
                teamArr[k + 1] = teamArr[k];
                teamArr[k] = temp;
            } else if(teamArr[k + 1].teamSum == teamArr[k].teamSum) {
                if(teamArr[k + 1].teamA > teamArr[k].teamA) {
                    temp = teamArr[k + 1];
                    teamArr[k + 1] = teamArr[k];
                    teamArr[k] = temp;
                } else if(teamArr[k + 1].teamA == teamArr[k].teamA) {
                    if(teamArr[k + 1].teamB > teamArr[k].teamB) {
                        temp = teamArr[k + 1];
                        teamArr[k + 1] = teamArr[k];
                        teamArr[k] = temp;
                    } else if(teamArr[k + 1].teamB == teamArr[k].teamB) {
                        if(teamArr[k + 1].teamC > teamArr[k].teamC) {
                            temp = teamArr[k + 1];
                            teamArr[k + 1] = teamArr[k];
                            teamArr[k] = temp;
                        } else if(teamArr[k + 1].teamC == teamArr[k].teamC) {
                            if(strcmp(teamArr[k + 1].name,teamArr[k].name) < 0) {
                                temp = teamArr[k + 1];
                                teamArr[k + 1] = teamArr[k];
                                teamArr[k] = temp;
                            } 
                        }    
                    }
                }
            }
        }
    } for(i = 0; i < n; i++) printf("%s %d %d %d %d\n", teamArr[i].name, teamArr[i].teamA, teamArr[i].teamB, teamArr[i].teamC, teamArr[i].teamSum);
    return 0;
}