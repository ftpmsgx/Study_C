#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char s1[20],s2[20];
	printf("Enter A string:");
	gets(s1);
	printf("Enter B string:");
	gets(s2);
	for(i=0;;i++)
	{
		if(s1[i]==0)
		{
			puts(s2);
			break;
		}
		if(s2[i]==0)
		{
			puts(s1);
			break;
		}
	}
	return 0;
}
