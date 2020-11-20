#include <stdio.h>

void swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;
}
int Sort(int arr[])
{
	int i,j;
	int min;
	for(i=0;i<10;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
			if(arr[j]<arr[min])
				min=j;
		swap(&arr[i],&arr[min]);
	}
}
int main()
{
	int a[10];
	int i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	Sort(&a);
	for(i=0;i<=9;i++)
		printf("%4d",a[i]);
	return 0;
}
