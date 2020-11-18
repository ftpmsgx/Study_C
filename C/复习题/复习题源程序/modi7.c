#include <stdio.h>
int fun (int b[])
{  
int k, a1, a2, i=0;
    for (k=10; k<=55; k++)
{
/************found************/
       a1=k%10; a2=k-k/10;                                  
       if((k%3==0 && a2==5)|| (k%3==0 && a1==5))
/************found************/
       {	
	b[i++]=k;i++;
       }                        
     }
return i;
}
void main()
{ 
int a[100], k, m;
    m=fun(a);
    printf("The result is:\n");
for (k=0; k<m; k++) 
printf("%4d",a[k]); 
printf("\n");
}
