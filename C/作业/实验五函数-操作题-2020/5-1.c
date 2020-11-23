#include <stdio.h>
#include <stdlib.h>
float fun(int m,int n)
{
	float p;
	int i;
	int sum1,sum2,sum3;
	sum1=sum2=sum3=1;
	if(m>n)
	{
		for(i=1;i<=m;i++)
			sum1*=i;
		for(i=1;i<=n;i++)
			sum2*=i;
		for(i=1;i<=m-n;i++)
			sum3*=i;
		p=(sum1*1.0)/(sum2*sum3);
	}
	return p;
}
main()
{   system("cls");
    printf("P=%f\n",fun(12,8));
  }
