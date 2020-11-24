#include <stdio.h>

int main()
{
	int a,m,i;
	int result=1;
	printf("Enter a and m:");
	scanf("%d%d",&a,&m);
	for(i=1;i<=m;i++)
		result*=a;
	printf("Result:%d\n",result);
}
