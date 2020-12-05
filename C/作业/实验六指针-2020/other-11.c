#include <stdio.h>

void swap(int *x,int *y)
{
	int t;
	t=*x;*x=*y;*y=t;
}
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
}
