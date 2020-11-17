#include <stdio.h>

int main()
{
	char ss[1024];
	int lower=0,upper=0,i;
	printf("Enter a string:");
	gets(ss);
	for(i=0;ss[i];i++)
	{
		if(ss[i]>='a'&&ss[i]<='z')
			lower++;
		if(ss[i]>='A'&&ss[i]<='Z')
			upper++;
	}
	printf("Lower=%d\tUpper=%d\n",lower,upper);
	return 0;
}
