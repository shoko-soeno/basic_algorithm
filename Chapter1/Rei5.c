/* モンテカルロ法による円周率の計算 */

#include <stdio.h>
#include <stdlib.h>

#define NUM 1000

double rnd(void);

int main(void)
{
    double x,y,pai;
    int i,in=0; //inは単位円内に入る点の数をカウント

    for (i=1;i<=NUM;i++){
        x=rnd();
        y=rnd();
        if (x*x+y*y<=1)
            in++;
        //点 (x, y) が単位円の内側にあればinを増加させる
    }
    pai=(double)4*in/NUM;
    //正方形の面積は1平方単位で、そのうち単位円内に入る点の割合を使ってπを計算
    //単位円の面積はπ/4なので、π ≈ 4 * (単位円内の点の数 / 全点の数) 
    printf("π=%f\n",pai);
}
double rnd(void)        // 0から1の乱数
{
    return (double)rand()/(RAND_MAX+0.1);
}
