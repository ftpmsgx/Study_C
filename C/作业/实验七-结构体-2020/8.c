#include <stdio.h>

typedef struct stu_inf {
	char id[11];
	char name[9];
	char college[64];
	char c[6];
	int age;
}stu;

int main() {
	stu inf;
	printf("Enter Student ID:");
	gets_s(inf.id);
	printf("Enter Name:");
	gets_s(inf.name);
	printf("Enter Your College:");
	gets_s(inf.college);
	printf("Enter Your Class:");
	gets_s(inf.c);
	printf("Enter Your Age:");
	scanf("%d", &(inf.age));
	printf("\n\nID:%s\nName:%s\nCollege:%s\nClass:%s\nAge:%d\n", inf.id, inf.name, inf.college, inf.c, inf.age);
}
