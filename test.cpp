//子序列的和
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);

	int n,m,i;
	double sum=0;
	scanf("%d,%d",&n,&m);
	 sum= 0;
	for(i=0;i<m-n+1;i++)
	{
		sum+=(1.0/(n+i))/(n+i);
	}
	printf("%.5lf\n",sum);
	printf("%lf",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}
