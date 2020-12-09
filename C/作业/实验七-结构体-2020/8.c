#include <stdio.h>

struct stu_inf {
	char id[11];
	char name[9];
	char college[64];
	char c[6];
	int age;
}stu,*point;

int main() {
	point=&stu;
	printf("Enter Student ID:");
	gets(stu.id);
	printf("Enter Name:");
	gets(stu.name);
	printf("Enter Your College:");
	gets(stu.college);
	printf("Enter Your Class:");
	gets(stu.c);
	printf("Enter Your Age:");
	scanf("%d",&(point->age));
	printf("\n\nID:%s\nName:%s\nCollege:%s\nClass:%s\nAge:%d\n",point->id,point->name,point->college,point->c,point->age);
}
