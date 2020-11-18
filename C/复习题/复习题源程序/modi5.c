#include <stdio.h>
/****************found*****************/
int fun(n);           
void main()
{int n;
printf("input n(n<10):");
scanf("%d",&n);
printf("%d!=%d\n",n,fun(n));
}
int fun(int n)
{int r;
if(n==0 || n==1)
r=1;
/****************found*****************/
else r=n*(n-1);            
return r;
}