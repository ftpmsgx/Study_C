#include  <stdio.h>
double fun(double  a[ ] , int  n)
{         }
main()
{  double  b[10],  r;    int  i;
    printf("���������ѡ�ֵ÷�:  ");
    for (i=0; i<10; i++)   scanf("%lf",&b[i]);
    printf("ѡ�ַ���Ϊ :  ");
    for (i=0; i<10; i++)   printf("%4.1lf ",b[i]);    printf("\n");
    r = fun(b, 10);
    printf("ѡ�����÷� :  %f\n", r );
}
