#include <stdio.h>
#include <string.h>

int main()
{
	char a[200],b[100];
	int a_len,b_len,i,j;
	printf("input a string:");
	gets(a);
	printf("input b string:");
	gets(b);
	a_len=strlen(a);b_len=strlen(b);
	for(i=a_len,j=0;i<=a_len+b_len-1,j<=b_len-1;i++,j++)
		a[i]=b[j];
	printf("output a+b string:\n");
	puts(a);
}
