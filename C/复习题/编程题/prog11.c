#include  <stdio.h>
double fun(double  a[ ] , int  n)
{         }
main()
{  double  b[10],  r;    int  i;
    printf("请裁判输入选手得分:  ");
    for (i=0; i<10; i++)   scanf("%lf",&b[i]);
    printf("选手分数为 :  ");
    for (i=0; i<10; i++)   printf("%4.1lf ",b[i]);    printf("\n");
    r = fun(b, 10);
    printf("选手最后得分 :  %f\n", r );
}
