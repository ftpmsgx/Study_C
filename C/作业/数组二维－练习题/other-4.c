#include <stdio.h>

int main()
{
	int a[10][10],i,j,m;
	printf("Enter a number(2<=m<=9):");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			a[i][j]=(i+1)*(j+1);
			printf("%4d",a[i][j]);
		}
		putchar('\n');
	}
}
