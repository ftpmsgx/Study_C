/********************
数据结构实验
题目：手机通讯录
制作人：
完成日期：2020‎年‎10‎月‎7‎日，‏‎19:42:12
版本号：v0.1-alpha
**********************/
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FILE_NAME "Contact.txt"//定义文件名（常量）
struct Person	//定义结构体，其内部包含5个字段
{
	int id;
	char name[10];
	char num[11];
	char age[8];
	char adds[200];
};
Person per[80];/*定义存储结构，在这里定义为外部变量，可以被下面所有函数使用；也可用其它方法使用*/
/*以下是选择界面样例。可以根据自己的设计，选择有的功能进行修改，修改为符合你的设计的内容*/
//
//					字符界面（menu_select函数）
//
//					******通讯录*****
//					制作人
//					*----------------------------------------------------------*
//					| 1.添加记录											   |
//					|2.显示记录												   |
//					|3.删除记录									               |
//					|4.查询记录								                   |
//					|5.修改记录                                                |
//					|6.检测记录文件是否存在（不存在则自动创建"Contact.txt"）   |
//					|7.删除现有记录文件(*慎用)                                 |
//					|0.退出程序												   |
//					*----------------------------------------------------------*
//					请您选择(0 - 7) :
int menu_select()	//选择菜单
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
		printf("\t\t|4.查询记录\t\t\t\t\t\t|\n");
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
void FILE_NULL()	//文件不存在时用的函数
{
	FILE* E;	//创建文件指针E
	printf("\033[32m 文件不存在，正在创建……\033[37m\n");
	E = fopen(FILE_NAME, "w");//打开文件（文件不存在则会自动创建）
	fputs("姓名", E);//写入表头
	fputs("\t", E);
	fputs("电话号码", E);
	fputs("\t", E);
	fputs("地址", E);
	fputs("\n", E);
	fclose(E);
}
void CreateFile()	//检测文件是否存在
{
	FILE* fileP;	//创建文件指针
	fileP = fopen(FILE_NAME, "r");		//打开文件
	if (fileP == NULL)		//如果文件不存在，则自动创建
	{
		FILE_NULL();
	}
	else
	{
		printf("\033[32m文件存在！\n");
		fclose(fileP);
		system("pause");
	}
}
void InputCord()	//添加记录
{
	system("CLS");
	FILE* In;	//创建文件指针
	In = fopen(FILE_NAME, "r");//打开文件，不存在则"r"模式不会自动创建
	if (In == NULL)		//如果文件不存在，则自动创建
	{
		FILE_NULL();
	}
	In = fopen(FILE_NAME, "a+");	//以更新模式打开文件
	struct Person cord[1000];	//利用Person结构体定义一个包含1000条记录的数组
	int n, i;	//定义循环用的变量
	printf("请输入要添加的记录个数:");
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)	//循环键入数据值（记录值）
	{
		system("CLS");
		printf("添加的第%d条记录，本次要添加的记录数为%d\n", i + 1, n);
		printf("请输入姓名:");
		scanf("%s", &cord[i].name);//从键盘输入值，并赋值给数组
		printf("请输入电话号码:");
		scanf("%s", &cord[i].num);
		printf("请输入住址:");
		scanf("%s", &cord[i].adds);
	}
	for (i = 0; i <= n - 1; i++)	//向文件写入上面所输入的数据值（记录值）
	{
		fputs(cord[i].name,In);//利用fputs函数向文件写入
		fputs("\t", In);
		fputs(cord[i].num, In);
		fputs("\t", In);
		fputs(cord[i].adds, In);
		fputs("\n", In);
	}
	fclose(In);//关闭文件
}
void Display()
{
	system("CLS");//清屏
	printf("\033[33m----------------记录显示--------------------\033[37m\n");
	char name[10], num[16], adds[200];
	FILE* Read;	//建立文件指针Read
	Read = fopen(FILE_NAME, "r");	//以只读的模式打开文件
	if (Read == NULL)	//检测文件是否存在
	{
		FILE_NULL();
	}
	else
	{
		while (fscanf(Read, "%s\t%s\t%s\n", name, num, adds) != EOF)
			//循环扫描文件流
			printf("|%s\t\t|%s\t\t|%s\t\t|\n", name, num, adds);//上面扫描一次，这里输出一次
		fclose(Read);	//循环结束后，关闭文件
	}
	system("pause");
}
void Delete_a_record()
{
	FILE* fp1;	//创建文件指针
	FILE* fp2;	//创建文件指针
	fp1 = fopen(FILE_NAME, "r");	//利用文件指针"fp1"打开"Contact.txt"文件
	if (fp1 == NULL)	//判断文件是否存在
	{
		FILE_NULL();	//调用该函数
	}
	else
	{
		fclose(fp1);	//关闭先前打开的文件
		fp1 = fopen(FILE_NAME, "r");//以只读的模式打开文件
		fp2 = fopen("Contact.tmp", "a+");//以更新模式打开文件
		char del_query[226];	//定义要用于查询删除的字符数组
		char name[10], num[16], adds[200];
		printf("请输入要被删除的记录的部分内容:");
		scanf("%s", &del_query);
		while (fscanf(fp1, "%s\t%s\t%s\n", name, num, adds) != EOF)		//文件流循环扫描，直到文件尾部
		{
			if (strstr(name, del_query) != NULL || strstr(num, del_query) != NULL || strstr(adds, del_query) != NULL)
			{//利用strstr函数，判断输入的字符串是否包含在name,num和adds内
				continue;
			}
			//将不删除的记录写入临时副本
			fputs(name, fp2);
			fputs("\t", fp2);
			fputs(num, fp2);
			fputs("\t", fp2);
			fputs(adds, fp2);
			fputs("\n", fp2);
		}
		fclose(fp1);	//关闭文件
		fclose(fp2);	//同上
		system("del Contact.txt");	//删除原文件
		system("ren Contact.tmp Contact.txt");	//将临时文件替补原来的txt文件
	}
}
void Query_a_record()//查询记录
{
	system("CLS");
	FILE* Q;//创建文件指针
	Q = fopen(FILE_NAME, "r");//检测文件是否存在
	if (Q == NULL)//不存在调用FILE_NULL()
	{
		FILE_NULL();
	}
	else
	{
		char query[226];//定义要查询的数据的容器
		char name[10], num[16], adds[200];
		printf("请输入要查找的内容:");
		scanf("%s", &query);//输入要查询的内容
		while (fscanf(Q, "%s\t%s\t%s\n", name, num, adds) != EOF)//循环扫描文件流
		{
			if (strstr(name, query) != NULL || strstr(num, query) != NULL || strstr(adds, query) != NULL)//找到的情况
				printf("|%s\t\t|%s\t\t|%s\t\t|\n", name, num, adds);
			else//反之
				printf("\033[32m 未查找到指定记录\033[37m \n");
		}
		fclose(Q);
	}
	system("pause");
}
void Change()//修改记录
{
	FILE* fp1;//文件指针
	FILE* fp2;//文件指针
	fp1 = fopen(FILE_NAME, "r");
	if (fp1 == NULL)
	{
		FILE_NULL();
	}
	else
	{
		fclose(fp1);
		fp1 = fopen(FILE_NAME, "r");//打开文件
		fp2 = fopen("Contact.tmp", "a+");//创建临时副本
		char edit_query[226];//定义要修改的内容的容器
		char name[10], num[16], adds[200];
		char name1[10], num1[16], adds1[200];
		printf("请输入要被更改的记录的部分内容:");
		scanf("%s", &edit_query);
		while (fscanf(fp1, "%s\t%s\t%s\n", name, num, adds) != EOF)//循环扫描文件流
		{
			if (strstr(name, edit_query) != NULL || strstr(num, edit_query) != NULL || strstr(adds, edit_query) != NULL)//找到
			{
				printf("请输入姓名:");
				scanf("%s", &name1);//键盘键入对应的信息
				printf("请输入电话号码:");
				scanf("%s", &num1);
				printf("请输入住址:");
				scanf("%s", &adds1);
				fputs(name1, fp2);//写入临时副本文件
				fputs("\t", fp2); //写入临时副本文件
				fputs(num1, fp2); //写入临时副本文件
				fputs("\t", fp2); //写入临时副本文件
				fputs(adds1, fp2);//写入临时副本文件
				fputs("\n", fp2); //写入临时副本文件
				continue;
			}
			fputs(name, fp2);//将不修改的记录写入到临时副本文件
			fputs("\t", fp2);//将不修改的记录写入到临时副本文件
			fputs(num, fp2); //将不修改的记录写入到临时副本文件
			fputs("\t", fp2);//将不修改的记录写入到临时副本文件
			fputs(adds, fp2);//将不修改的记录写入到临时副本文件
			fputs("\n", fp2);//将不修改的记录写入到临时副本文件
		}
		fclose(fp1);//关闭文件
		fclose(fp2);//关闭文件
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
//					字符界面（menu_select函数）
//
//					******通讯录*****
//					制作人：
//					*----------------------------------------------------------*
//					| 1.添加记录											   |
//					|2.显示记录												   |
//					|3.删除记录									               |
//					|4.查询记录								                   |
//					|5.修改记录                                                |
//					|6.检测记录文件是否存在（不存在则自动创建"Contact.txt"）   |
//					|7.删除现有记录文件(*慎用)                                 |
//					|0.退出程序												   |
//					*----------------------------------------------------------*
//					请您选择(0 - 7) :
