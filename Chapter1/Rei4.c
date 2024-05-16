/* ランダムな順列（効率の悪い方法） */

#include <stdio.h>
#include <stdlib.h>

#define N 20

int irnd(int);

int main(void)
{
    int i,j,flag,a[N+1];

    a[1]=irnd(N);
    for (i=2;i<=N;i++){
        do { //新しい乱数を生成, 既に配列aに存在するかどうかをチェック
            a[i]=irnd(N);
            flag=0; //重複がないことを示すフラグを初期化
            for (j=1;j<i;j++)
                if (a[i]==a[j]){
                    flag=1;break;
                }
        } while (flag==1);
    }
    for (i=1;i<=N;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int irnd(int n)        // rand: 0からRAND_MAXまでの乱数を生成
{
    return (int)(rand()/(RAND_MAX+0.1)*n+1);
}
// rand()の結果をRAND_MAXで割ることで、0から1までの浮動小数点数を生成
// それをn倍して1を足すことで、1からnまでの範囲の乱数を生成