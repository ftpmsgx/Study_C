#include <stdio.h>
#include <math.h>

void prime(int num)
{
	int i,status=1;
	for(i=2;i<=(int)sqrt(num);i++)
	{
		if(num%i)
			status=1;
		else
		{
			status=0;
			break;
		}
	}
	if(status)
		printf("Yes\n");
	else
		printf("No\n");
}
int main()
{
	int n;
	printf("\n\nInput n:  "); 
	scanf("%d",&n);
	prime(n);
}
