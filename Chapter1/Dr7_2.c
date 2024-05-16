/* エラストテネスの篩 */
#include <stdio.h>
#include <math.h>

#define NUM 1000 //素数を探索する上限値

int main(void)
{
	int prime[NUM+1];
	int i,j,Limit;

	for (i=2;i<=NUM;i++)
		prime[i]=1; //2からNUMまでのインデックスを全て1（素数と仮定）で初期化

	Limit=(int)sqrt((double)NUM);
	for (i=2;i<=Limit;i++){
		if (prime[i]==1) //iが素数である場合、iの倍数を篩にかける
		{
			for (j=2*i;j<=NUM;j++) //iの最初の倍数（2*i）からNUMまで
			{
				if (j%i==0) //jは常にiの倍数なので、この条件はなくても動く
					prime[j]=0;
			}
		}
	}
	printf("\n求められた素数\n");
	for (i=2;i<=NUM;i++)
		if (prime[i]==1)
			printf("%5d",i);
	printf("\n");
}
