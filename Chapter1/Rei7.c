/* エラストテネスの篩 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,n,Limit;

    while (printf("data? "),scanf("%d",&n)!=EOF){
        if (n>=2){ //2未満の数は素数ではない
            Limit=(int)sqrt((double)n);
            for (i=Limit;i>1;i--) //2から平方根までの範囲で割り切れるか
            {
                if (n%i == 0)
                    break;
            }
            if (i==1)
                printf("素数\n");
            else
                printf("素数でない\n");
        }
    }
}
