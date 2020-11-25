#include <stdio.h>

int main()
{
        int a[3][2];
        int i,j,max,row,column;
        printf("Enter an array of three rows and two columns:\n");
        for(i=0;i<=2;i++)
                for(j=0;j<=1;j++)
                        scanf("%d",&a[i][j]);
        printf("Array of inputs:\n");
        for(i=0;i<=2;i++)
        {
                for(j=0;j<=1;j++)
                        printf("%4d",a[i][j]);
                putchar('\n');
        }
        max=a[0][0];
        for(i=0;i<=2;i++)
                for(j=0;j<=1;j++)
                        if(max<a[i][j])
                        {
                                max=a[i][j];
                                row=i;column=j;
                        }
        printf("Subscript of min value(row,column):(%d,%d)\n",row,column);
        printf("Max value:%d\n",max);
}
