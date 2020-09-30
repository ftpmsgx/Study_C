#include <stdio.h>
int n = 0;
struct students
{
    char name[20];
    int age;
    char _class[5];
};
int main()
{
    printf("请输入学生数量：");
    scanf("%d", &n);
    struct students *a = new students[n];
    int i;
    printf("请输入学生数据：\n");
    for (i = 0; i <= n-1; i++)
        scanf("%s%d%s", &a[i].name, &a[i].age, a[i]._class);
    printf("---------------------------\n");
    printf("姓名\t\t年龄\t班级\n");
    for (i = 0; i <= n-1; i++)
        printf("%s\t\t%d\t%s\n", a[i].name, a[i].age, a[i]._class);
    return 0;
}
