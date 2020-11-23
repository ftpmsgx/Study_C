#include <math.h>
#include <stdio.h>
double fun(int  n)
{
	double s=0;
	int i,j,status=0;
	for(i=3;i<=n;i++)
	{
		for(j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j==0)
				status=0;
			else
				status=1;
		}
		if(status)
			s+=sqrt(i);
	}
	return s;
}
main()
{ int  n;    double  sum;
  printf("\n\nInput n:  "); 
  scanf("%d",&n);
  sum=fun(n);
  printf("\n\nsum=%f\n\n",sum);
}
