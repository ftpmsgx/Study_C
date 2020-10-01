#include <stdio.h>

int a[10000];

int main()
{
    int n, i, j, t;
    printf("输入要排序数字的个数:");
    scanf("%d", &n);
    printf("输入要排序的数:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j] < a[j + 1])
            {
                t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }
    printf("结果:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    return 0;
}
