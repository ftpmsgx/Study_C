#include <stdio.h>
#define    N    9
/**********found**********/
void fun( _____1____, int  n)  
{  int  i, t, p;
   p = (n%2==0)?n/2:n/2+1;
   for (i=0; i<n/2; i++)
   {
/**********found**********/  
       _____2____;
      a[i] = a[p+i];
      a[p+i]= t;
   }
}
void main()
{  int  b[N]={1,2,3,4,5,6,7,8,9}, i;
   printf("\nThe original data  :\n");
   for (i=0; i<N; i++)  printf("%4d ", b[i]);
   printf("\n");
   fun(b, N);
   printf("\nThe data after moving  :\n");
   for (i=0; i<N; i++)  printf("%4d ", b[i]);
   printf("\n");
}
