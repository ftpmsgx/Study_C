#include <stdio.h>

int main()
{
	int a[4][4];
	int i,j,sum=0;
	printf("input 2D array:\n");
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++)
			scanf("%d",&a[i][j]);
	printf("Original array:\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
			printf("%4d",a[i][j]);
		putchar('\n');
	}
	for(i=0;i<=3;i++)
		sum+=a[i][i];
	printf("Sum of main diagonals:%d\n",sum);
	sum=0;
	for(i=0,j=3;i<=3,j>=0;i++,j--)
		sum+=a[i][j];
	printf("Sum of anti diagonals:%d\n",sum);
}
