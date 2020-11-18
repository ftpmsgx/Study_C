#include <stdio.h>
int fun(unsigned n)
{  
	int count=0,max=0,t;
	do
	{  	t=n%10;
		if(t==0)
			count++;
/**************found**************/
		n=n%10;		
	}while(n);
/**************found**************/		
	return count
}
void main( )
{  	unsigned n;    
	int zeroCount;
	printf("\nInput n(unsigned):  ");  
	scanf("%d",&n);
	zeroCount=fun(n);
	printf("\nThe result: zeroCount=%d\n",zeroCount);
}
