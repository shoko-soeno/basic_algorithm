/* ポインタをソートする */

#include <stdio.h>
#include <string.h>

#define N 10

int main(void)
{
    struct girl {
        char name[20];
        int age;
    };
    struct girl *t;
    struct girl *p[N];
    struct girl a[]={"Ann",18,"Rolla",19,"Nancy",16,"Eluza",17,"Juliet",18,
                    "Machilda",20,"Emy",15,"Candy",16,"Ema",17,"Mari",18};
    char *min;
    int s, i, j; //sは最小値のインデックスを保持

    for (i=0;i<N;i++)
        p[i]=&a[i]; //pは構造体girlのポインタを要素とする配列

    //選択ソートアルゴリズムで名前をアルファベット順にソート
    for (i=0;i<N-1;i++){ //iはソートされていない部分の先頭要素
        min=p[i]->name;
        s=i;
        for (int j=i+1;j<N;j++){  //残りのリスト（i+1からN）を走査、最小値を探索
            if (strcmp(p[j]->name,min)<0){
                min=p[j]->name;
                s=j;
            }
        }
        t=p[i]; p[i]=p[s]; p[s]=t;    // ポインタのスワップ
    }

    for (i=0;i<N;i++)
        printf("%10s%4d\n",p[i]->name,p[i]->age);
}
