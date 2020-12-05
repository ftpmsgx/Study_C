#include <stdio.h>

int main()
{
	int *p;
	int i,a[5]={1,2,3,4,5};
	p=a;
	for(i=0;i<=4;i++)
		printf("%4d",*p+i);
	putchar('\n');
}
