#include <stdio.h>
#include <math.h>

int prime(int num)
{
	int i,status=0,c=2,j;
	for(j=4;j<=num;j++)
	{
		for(i=2;i<=(int)sqrt(j);i++)
		{
			if(j%i)
				status=1;
			else
			{
				status=0;
				break;
			}
		}
		if(status)
			c++;
	}
	return c;
}
int main()
{
	int n;
	printf("\n\nInput n:  "); 
	scanf("%d",&n);
	printf("Count:%d\n",prime(n));
}
