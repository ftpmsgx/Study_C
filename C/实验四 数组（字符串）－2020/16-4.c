#include <stdio.h>
#include <string.h>

int main()
{
	int i,ds;
	char s[81],str;
	printf("Enter a char:");
	scanf("%c",&str);
	getchar();
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i];i++)
		if(str==s[i])
			ds=i;
	if(ds)
		printf("Max subscript:%d\n",ds);
	else
		printf("Not Found!\n");
}
