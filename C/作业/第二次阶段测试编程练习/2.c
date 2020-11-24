#include <stdio.h>

int main()
{
	int a[11]={1,2,6,7,9,10,18,19,20,30,0};
	int i,n,end;
	printf("Original array:");
	for(i=0;i<=10;i++)
		printf("%4d",a[i]);
	putchar('\n');
	printf("Enter the number to insert:");
	scanf("%d",&n);
	end=9;
	while(end>=0&&n<a[end])
	{
		a[end+1]=a[end];
		end--;
	}
	a[end+1]=n;
	printf("Inserted array:");
	for(i=0;i<=10;i++)
		printf("%4d",a[i]);
	putchar('\n');
}
