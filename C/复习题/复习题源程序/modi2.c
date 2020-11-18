#include<stdio.h>
float m[10];
/*************found******************/
int fun();                  
void main()
{int i;
for(i=0;i<10;i++)
    {
     m[i]=(float)(i+20);
     printf("%.2f ",m[i]);
    }
 fun();
}
void  fun(void)
{int j;
printf("\n"); 
for(j=0;j<10;j++)
    {
/**********************found***********************/
     printf("%.2f ",m[j]/5);           
    }
}