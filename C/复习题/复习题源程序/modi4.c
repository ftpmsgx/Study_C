#include <stdio.h>
#define F(x,y) x*y

void main()
{int x,y,z;
printf("Enter x y:");
/****************found*****************/
scanf("%d%d,&x,&y");
/****************found*****************/
z=F(x+y,x+y);
printf("the result is %d",z);
}