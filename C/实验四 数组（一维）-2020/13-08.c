#include <stdio.h>

int main()
{
	int a[40]={1,1};
	int i,n=0;
	for(i=2;i<=39;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<=39;i++)
	{
		printf("%10d",a[i]);
		n++;
		if(n%5==0)
			putchar('\n');
	}
}
