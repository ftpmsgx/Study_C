#include <stdio.h>
#define N 20
double fun(int p[], int n)
{ 
}
void main( )
{  
    int a[N]={1,9,2,3,11,6};
    int i,n=6;
    printf("The original data is:\n");
    for (i=0;i<n;i++) 
        printf("%5d",a[i]); 
    printf("\n\n");	
    printf("The sum of odd numbers:  %lf\n", fun(a,n));
