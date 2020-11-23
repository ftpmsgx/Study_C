#include <stdio.h>

int main()
{
	int a[10],n;
	int i,j,t;
	printf("Please input n:");
	scanf("%d",&n);
	printf("Please input %d numbers:",n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++)
		for(j=0;j<=n-2-i;j++)
			if(a[j]>a[j+1])
				t=a[j],a[j]=a[j+1],a[j+1]=t;
	printf("Output:");
	for(i=0;i<=n-1;i++)
		printf("%4d",a[i]);
	putchar('\n');
}
