#include <stdio.h>

int main()
{
	int a[11]={1,2,3,4,6,7,8,9,10,11};
	int i,j,t,n;
	printf("Please a number:");
	scanf("%d",&a[10]);
	printf("Output:");
	for(i=0;i<=9;i++)
		printf("%4d",a[i]);
	for(i=0;i<10;i++)
		for(j=0;j<10-i;j++)
			if(a[j]>a[j+1])
				t=a[j],a[j]=a[j+1],a[j+1]=t;
	putchar('\n');
	printf("Output:");
	for(i=0;i<=10;i++)
		printf("%4d",a[i]);
	putchar('\n');
}
