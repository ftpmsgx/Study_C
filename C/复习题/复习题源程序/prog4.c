#include <stdio.h>
#define  M 20
double Acc( int k, double dd[] )
{
}
void main()
{  int i, m;
   double  x, tt[M];
   printf("\nPlease enter  m(m<20): ");
   scanf("%d", &m );
    for( i = 0; i < m; i++ )
       scanf("%lf", &tt[i] ); 
   printf( "\nThe sum of their decimal part is: %lf\n", Acc(m, tt));
 }
