#include <stdio.h>
void sort(int a[] ,int n)
{ 
}
void main()
{int a[10],n;
 int i;
 printf("Input n(n<10):");
 scanf("%d",&n);
 printf("Input array of %d integer:",n);
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 sort(a,n);
 for(i=0;i<n;i++)
	 printf("%d  ",a[i]);
}
