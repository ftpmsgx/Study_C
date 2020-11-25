#include <stdio.h>

int main()
{
	int a[6][6],i,j,n,t;
	printf("Enter n(1<=n<=6):");
	scanf("%d",&n);
	printf("Original array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=i*n+j+1;
			printf("%7d",a[i][j]);
		}
		putchar('\n');
	}
	printf("Result:\n");
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
			t=a[i][j],a[i][j]=a[j][i],a[j][i]=t;
	for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                        printf("%7d",a[i][j]);
                putchar('\n');
        }
}
