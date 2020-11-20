#include <stdio.h>

void swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;
}
int Sort(int arr[],int len)
{
	int i,j;
	int min;
	for(i=0;i<len;i++)
	{
		min=i;
		for(j=i+1;j<len;j++)
			if(arr[j]<arr[min])
				min=j;
		swap(&arr[i],&arr[min]);
	}
}
void insert(int *a,int n,int i,int v)
{
	int j;
	for(j=n-1;j>=i;j--)
		a[j+1]=a[j];
	a[i]=v;
}
int main()
{
	int a[200];
	int i,n,num,c=20;
	for(i=0;i<=19;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of numbers to insert:");
	scanf("%d", &n);
	printf("Please input numbers:");
	for (i = 20; i < n+20; i++)
	{
		scanf("%d",&num);
		insert(&a,c+=1,i,num);
	}
	Sort(&a,20+n);
	for(i=0;i<=19+n;i++)
		printf("%4d",a[i]);
	return 0;
}
