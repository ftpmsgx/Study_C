#include <stdio.h>
#include <math.h>

int fn(int bit,int num)
{
	int result=0,i;
	for(i=0;i<num;i++)
		result+=pow(10,i)*bit;
	return result;
}
int main()
{
	int a,n,sum=0,i;
	printf("Enter a and n:");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
		sum+=fn(a,i);
	printf("Result:%d\n",sum);
}
