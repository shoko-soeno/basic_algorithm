/* 順位づけ（改良版） */

/* 順位づけ(改良版) */  

#include <stdio.h>

#define Num 10
#define Max 100
#define Min 0

void main(void)
{
    int a[]={56,25,67,88,100,61,55,67,76,56};
    int i,juni[Max+2];

    for (i=Min;i<=Max;i++)
        juni[i]=0;

    for (i=0;i<Num;i++)
        juni[a[i]]++;
    //juni[100]=1, juni[88]=1, juni[76]=1, juni[67]=2...

    juni[Max+1]=1; //得点範囲外の位置（ここでは101）に1を設定
    for (i=Max;i>=Min;i--)
        juni[i]=juni[i]+juni[i+1];
    //juni[101]=1, juni[100]=2, その後juni[89]まで2がコピーされる
    //juni[88]=3, その後juni[77]まで3がコピーされる。juni[76]=4

    printf("得点　順位\n");
    for (i=0;i<Num;i++){
        printf("%6d%6d\n",a[i],juni[a[i]+1]);
    }
}
