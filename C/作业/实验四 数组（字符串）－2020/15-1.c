#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100];
	int nb,ss,i,j;
	printf("Enter A String:");
	gets(a);
	printf("Enter B String:");
	gets(b);
	nb=strlen(b);
	for(i=nb,j=0;j<=strlen(a);i++,j++)
		b[i]=a[j];
	b[i]='\0';
	puts(b);
	putchar('\n');
	return 0;
}
