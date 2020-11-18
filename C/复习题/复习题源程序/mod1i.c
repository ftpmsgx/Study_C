#include <stdio.h>
#define  M 10
void main()
{  int a[M], i=0,m;
   printf( "\nPlease enter an integer number between 4 and 10: " );
   scanf("%d",&m);
/*************found**************/
   while(i<m){a[i]=(i+1)*(i+1);}           
   printf( "\nThe output :\n" );
/*************found**************/
   for( i=m-1; i >= 0;i++)       
     printf( "%4d",  *(a+i)  );

}