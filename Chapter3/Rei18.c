/* 直接選択法によるソート */

#include <stdio.h>
#define N 6

int main(void)
{
    int a[]={80,41,35,90,40,20};
    int min,s,t,i,j;
// min：現在の最小値を保持
// s：現在の最小値のインデックスを保持
// t：一時変数として使用

    for (i=0;i<N-1;i++){
        min=a[i];
        s=i;
        for (j=i+1;j<N;j++){
            if (a[j]<min){
                min=a[j];
                s=j;
            }
        }
        t=a[i];
        a[i]=a[s];
        a[s]=t;
    }

    for (i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
}
