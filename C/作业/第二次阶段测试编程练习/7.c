#include <stdio.h>

int main()
{
	int a[3][4];
	int i,j,min,row,column;
	printf("Enter an array of three rows and four columns:\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
			scanf("%d",&a[i][j]);
	printf("Array of inputs:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			printf("%4d",a[i][j]);
		putchar('\n');
	}
	min=a[0][0];
	for(i=0;i<=2;i++)
		for(j=0;j<=3;j++)
			if(min>a[i][j])
			{
				min=a[i][j];
				row=i;column=j;
			}
	printf("Subscript of min value(row,column):(%d,%d)\n",row,column);
	printf("Min value:%d\n",min);
}
