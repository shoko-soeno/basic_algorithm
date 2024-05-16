/* 2からNの中から素数を拾い出す */

#include <stdio.h>
#include <math.h>

#define NUM 1000

int main(void)
{
    int prime[NUM/2+1];
    int i,n,m=0,Limit;
//prime: NUMが1000の場合、約500個の素数を格納する必要があるため、
// 配列の大きさをNUM / 2 + 1としている
// n：探索する数値を保持
// m：見つかった素数の数をカウント
// Limit：素数判定のために使用する制限値　数値nの平方根を整数に変換したもの

    for (n=2;n<=NUM;n++){
        Limit=(int)sqrt((double)n);
        for (i=Limit;i>1;i--){
            if (n%i == 0)
                break;
        }
        if (i==1)
            prime[m++]=n;
    }
//2からNUM（1000）までの数値nについてループを実行
//数値nの平方根を計算し、整数に変換してLimitに格納
//Limitから2までの数値iについて逆順にループを実行
//nがiで割り切れる場合、素数ではないためループを終了
//ループが終了した時点でiが1であれば、nは素数です。

    printf("\n求められた素数\n");
    for (i=0;i<m;i++)
        printf("%5d",prime[i]);
    printf("\n");
}
