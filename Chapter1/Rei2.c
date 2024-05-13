/* 度数分布(ヒストグラム) */

#include <stdio.h>
#define N 20

long combi(int, int);

int main(){
    int n, r;
    for (n=0; n<=5 ;n++){
        for (r=0; r<=n ; r++){
            printf("%dC%d=%ld ",n,r,combi(n,r));
        printf("\n");
        }
    }
}

long combi(int n, int r)
{
    int i;
    long p=1;
    for(i=1; i<=r; i++)
        p=p*(n-i+1)/i;
    return p;
}
