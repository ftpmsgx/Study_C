#include <stdio.h>

int main()
{
	int port[10];
	int i,t,max,n;
	printf("Please Port Number:");
	for(i=0;i<=9;i++)
		scanf("%d",&port[i]);
	max=port[0];
	for(i=1;i<=9;i++)
	{
		if(max<port[i])
		{
			t=max,max=port[i],port[i]=t;
			n=i;
		}
	}
	printf("Max Port is %d\nNum:%d\n",max,n+1);
}
