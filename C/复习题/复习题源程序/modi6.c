#include <stdio.h>
#include <string.h>
void func(char s[])
{int i;
/**************found**************/
	for(i=0; s[i]!='\0'; i++)	
{while(s[i]>='0'&&s[i]<='9')
strcpy(s[i], s[i+1]);
}
}
void main( )
{char str[80];
printf("Input string:");
gets(str);
/**************found**************/
str=func(str);
printf("After delete digital char:%s\n",str);
}