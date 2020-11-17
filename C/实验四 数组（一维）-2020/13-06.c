#include <stdio.h>

int main()
{
	int a[10],t,i,j,n;
	printf("N=");
	scanf("%d",&n);
	printf("Please input N numbers:");
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	if(n%2==0)
		for(i=0,j=n-1;i<=n/2,j>=n/2+1;i++,j--)
			t=a[i],a[i]=a[j],a[j]=t;
	if(n%2==1)
		for(i=0,j=n-1;i<=n/2,j>=n/2+2;i++,j--)
			t=a[i],a[i]=a[j],a[j]=t;
	printf("Output:");
	for(i=0;i<=n-1;i++)
		printf("%4d",a[i]);
	putchar('\n');
}
