/* 順位づけ（スコアが低い方が順位が高い場合） */  

#include <stdio.h>

#define Num 10
#define Max 36
#define Min -20
#define Bias 1-(Min)    // 最小値を配列要素の1に対応させる
// Biasは、得点の範囲が負の際に、配列のインデックスとして正の値に変換する
// ために使用する
// 得点の最小値を配列の最初のインデックスに対応させるためのオフセット
// 例えば、最小値が-20の場合、Bias = 1 - (-20) = 21
// →21-20=1で、juni配列のインデックス1に対応する。

int main(void)
{
    int a[]={-3,2,3,-1,-2,-6,2,-1,1,5};
    int i,juni[Max+Bias+1];

    for (i=Min+Bias;i<=Max+Bias;i++)
        juni[i]=0;

    for (i=0;i<Num;i++)
        juni[a[i]+Bias]++;

    juni[0]=1;
    for (i=Min+Bias;i<=Max+Bias;i++)
        juni[i]=juni[i]+juni[i-1];

    printf(" 得点　順位\n");
    for (i=0;i<Num;i++){
        printf("%6d%6d\n",a[i],juni[a[i]+Bias-1]);
    }
}
