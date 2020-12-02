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
void insert(int a[],int n,int i,int v)
{
	int j;
	for(j=n-1;j>=i;j--)
		a[j+1]=a[j];
	a[i]=v;
}
void input(int arr[])
{
	int i;
	for(i=0;i<=19;i++)
        {
                scanf("%d",&arr[i]);
        }
}
void output(int arr[],int x)
{
	int i;
	for(i=0;i<=x;i++)
                printf("%4d",arr[i]);
}
int main()
{
	int a[200];
	int i,n,num,c=20;
	input(&a);
	printf("Enter the number of numbers to insert:");
	scanf("%d", &n);
	if(20 + n > 200)
	{
		printf("Greater than table length\n");
		return 0;
	}
	printf("Please input numbers:");
	for (i = 20; i < n+20; i++)
	{
		scanf("%d",&num);
		insert(&a,c+=1,i,num);	//要操作的数组,长度,插入的位置,要插入的数
	}
	Sort(&a,20+n);
	output(&a,19+n);
	return 0;
}
