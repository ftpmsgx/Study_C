/********************
数据结构实验
题目：手机通讯录
制作人：
完成日期：
版本号：
**********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_NAME "Contact.txt"
struct Person/*定义结构体,注意，你的设计，可以根据需要调整结构体，这里只是样本*/
{
	int id;
	char name[10];
	char num[11];
	char age[8];
	char adds[200];
};
Person per[80];/*定义存储结构，在这里定义为外部变量，可以被下面所有函数使用；也可用其它方法使用*/
/*以下是选择界面样例。可以根据自己的设计，选择有的功能进行修改，修改为符合你的设计的内容*/
int menu_select()
{
	char c;
	do {
		system("cls");
		printf("\t\t ******通讯录***** \n");
		printf("\t\t       制作人      \n");
		printf("\t\t*-------------------------------------------------------*\n");
		printf("\t\t|1.添加记录\t\t\t\t\t\t|\n");
		printf("\t\t|2.显示记录\t\t\t\t\t\t|\n");
		printf("\t\t|3.删除记录\t\t\t\t\t\t|\n");
		printf("\t\t|4.查询记录\t\t\t\t\t|\n");
		printf("\t\t|5.修改记录\t\t\t\t\t\t|\n");
		printf("\t\t|6.检测记录文件是否存在（不存在则自动创建\"Contact.txt\"）|\n");
		printf("\t\t|\033[31m7.删除现有记录文件(*慎用)\033[37m\t\t\t\t|\n");
		printf("\t\t|0.退出程序\t\t\t\t\t\t|\n");
		printf("\t\t*-------------------------------------------------------*\n");
		printf("\t\t请您选择(0-7):");
		c = getchar();
	} while (c < '0' || c>'7');
	return(c - '0');
}
void FILE_EMPTY()
{
	FILE* E;
	printf("\033[32m 文件不存在，正在创建……\033[37m\n");
	E = fopen(FILE_NAME, "w");
	fputs("姓名", E);
	fputs("\t", E);
	fputs("电话号码", E);
	fputs("\t", E);
	fputs("地址", E);
	fputs("\n", E);
	fclose(E);
}
void CreateFile()
{
	FILE* fileP;	//创建文件指针
	fileP = fopen(FILE_NAME, "r");		//打开文件
	if (fileP == NULL)		//如果文件不存在，则自动创建
	{
		FILE_EMPTY();
	}
}
void InputCord()
{
	system("CLS");
	FILE* In;	//创建文件指针
	In = fopen(FILE_NAME, "r");
	if (In == NULL)		//如果文件不存在，则自动创建
	{
		FILE_EMPTY();
	}
	In = fopen(FILE_NAME, "a+");	//以更新模式打开文件
	struct Person cord[1000];
	int n, i;
	printf("请输入要添加的记录个数:");
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		system("CLS");
		printf("添加的第%d条记录，本次要添加的记录数为%d\n", i + 1, n);
		printf("请输入姓名:");
		scanf("%s", &cord[i].name);
		printf("请输入电话号码:");
		scanf("%s", &cord[i].num);
		printf("请输入住址:");
		scanf("%s", &cord[i].adds);
	}
	for (i = 0; i <= n - 1; i++)
	{
		fputs(cord[i].name,In);
		fputs("\t", In);
		fputs(cord[i].num, In);
		fputs("\t", In);
		fputs(cord[i].adds, In);
		fputs("\n", In);
	}
	fclose(In);
}
void Display()
{
	system("CLS");
	printf("\033[33m----------------记录显示--------------------\033[37m\n");
	char name[10], num[16], adds[200];
	FILE* Read;
	Read = fopen(FILE_NAME, "r");
	if (Read == NULL)
	{
		FILE_EMPTY();
	}
	else
	{
		while (fscanf(Read, "%s\t%s\t%s\n", name, num, adds) != EOF)
			printf("|%s\t\t|%s\t\t|%s\t\t|\n", name, num, adds);
		fclose(Read);
	}
	system("pause");
}
void Delete_a_record()
{
	FILE* fp1;
	FILE* fp2;
	fp1 = fopen(FILE_NAME, "r");
	if (fp1 == NULL)
	{
		FILE_EMPTY();
	}
	else
	{
		fclose(fp1);
		fp1 = fopen(FILE_NAME, "r");
		fp2 = fopen("Contact.tmp", "a+");
		char del_query[226];
		char name[10], num[16], adds[200];
		int stat = 0;
		printf("请输入要被删除的记录的部分内容:");
		scanf("%s", &del_query);
		while (fscanf(fp1, "%s\t%s\t%s\n", name, num, adds) != EOF)
		{
			if (strstr(name, del_query) != NULL || strstr(num, del_query) != NULL || strstr(adds, del_query) != NULL)
			{
				continue;
			}
			fputs(name, fp2);
			fputs("\t", fp2);
			fputs(num, fp2);
			fputs("\t", fp2);
			fputs(adds, fp2);
			fputs("\n", fp2);
		}
		fclose(fp1);
		fclose(fp2);
		system("del Contact.txt");
		system("ren Contact.tmp Contact.txt");
	}
}
void Query_a_record()
{
	system("CLS");
	FILE* Q;
	Q = fopen(FILE_NAME, "r");
	if (Q == NULL)
	{
		FILE_EMPTY();
	}
	else
	{
		char query[226];
		char name[10], num[16], adds[200];
		int stat = 0;
		printf("请输入要查找的内容:");
		scanf("%s", &query);
		while (fscanf(Q, "%s\t%s\t%s\n", name, num, adds) != EOF)
		{
			if (strstr(name, query) != NULL || strstr(num, query) != NULL || strstr(adds, query) != NULL)
			{
				stat = 1;
				break;
			}
		}
		if (stat)
			printf("|%s\t\t|%s\t\t|%s\t\t|\n", name, num, adds);
		else
			printf("\033[32m 未查找到指定记录\033[37m \n");
		fclose(Q);
	}
	system("pause");
}
void Change()
{
	FILE* fp1;
	FILE* fp2;
	fp1 = fopen(FILE_NAME, "r");
	if (fp1 == NULL)
	{
		FILE_EMPTY();
	}
	else
	{
		fclose(fp1);
		fp1 = fopen(FILE_NAME, "r");
		fp2 = fopen("Contact.tmp", "a+");
		char edit_query[226];
		char name[10], num[16], adds[200];
		char name1[10], num1[16], adds1[200];
		int stat = 0;
		printf("请输入要被更改的记录的部分内容:");
		scanf("%s", &edit_query);
		while (fscanf(fp1, "%s\t%s\t%s\n", name, num, adds) != EOF)
		{
			if (strstr(name, edit_query) != NULL || strstr(num, edit_query) != NULL || strstr(adds, edit_query) != NULL)
			{
				printf("请输入姓名:");
				scanf("%s", &name1);
				printf("请输入电话号码:");
				scanf("%s", &num1);
				printf("请输入住址:");
				scanf("%s", &adds1);
				fputs(name1, fp2);
				fputs("\t", fp2);
				fputs(num1, fp2);
				fputs("\t", fp2);
				fputs(adds1, fp2);
				fputs("\n", fp2);
				continue;
			}
			fputs(name, fp2);
			fputs("\t", fp2);
			fputs(num, fp2);
			fputs("\t", fp2);
			fputs(adds, fp2);
			fputs("\n", fp2);
		}
		fclose(fp1);
		fclose(fp2);
		system("del Contact.txt");
		system("ren Contact.tmp Contact.txt");
	}
}
void main()
{
	int n = 0;
	for (;;)
	{
		switch (menu_select())
		{
		case 1:InputCord(); break;
		case 2:Display(); break;
		case 3:Delete_a_record(); system("pause"); break;
		case 4:Query_a_record(); break;
		case 5:Change(); system("pause"); break;
		case 6:CreateFile(); system("pause"); break;
		case 7:system("del Contact.txt"); printf("\n\t删除完成！\n"); system("pause"); break;
		case 0:printf("\n\t\t谢谢使用,再见!\n");
			printf("\n\t\t"); system("pause"); exit(0);
		}
	}
}
