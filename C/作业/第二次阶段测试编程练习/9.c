#include <stdio.h>
#include <math.h>

void pd(int num)
{
	if(pow((num%10),3)+pow((num/10%10),3)+pow((num/100),3)==num)
		printf("%5d",num);
}
int main()
{
	int i;
	for(i=100;i<=999;i++)
		pd(i);
	putchar('\n');
}
