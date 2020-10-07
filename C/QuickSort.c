#include <stdio.h>

int a[1001], n;

void swap(int* x, int* y)   //交换自定义数值函数
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void quicksort(int left, int right) //自定义快速排序函数
{
    int i, j, t, tmp;
    if (left > right)
        return;
    tmp = a[left];  //将基准数复制到tmp中
    i = left;
    j = right;
    while (i != j)
    {   //从右到左找（必须）
        while (a[j] >= tmp && i < j)
        {
            j--;
        }
        //从左到右找
        while (a[i] <= tmp && i < j)
        {
            i++;
        }
        if (i < j)  //left与right未相遇，交换对应的值
            swap(&a[i], &a[j]);
    }
    //将基准数归位
    a[left] = a[i];
    a[i] = tmp;
    //递归调用
    quicksort(left, i - 1);
    quicksort(i + 1, right);
}
int main()
{
    int i, j;
    printf("Please Enter the Number of numbers to sort:");
    scanf("%d", &n);
    printf("Please Enter the Number You want to sort:");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    quicksort(1, n);    //调用自定义快速排序函数
    printf("Result：");
    for (i = 1; i <= n; i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}
