#include <stdio.h>
#include <string.h>
long fun(char p[])
{
	long n=0,i=0;
	int flag=0;
/**********found**********/
	while(  _____1____ ) 	
	{ 
		if(p[i]=='-') 
			flag=1;
		else if(p[i]=='+') 
			flag=0;
/**********found**********/
		else 
			n=n*10+(p[i]-'0'); 
		____2____	
	}
	if (flag==1) 
		n=-n;
    return n; 
}
void main( )  
{ 
	char s[6];
	long n;
	printf("Enter a string:\n");
	gets(s);
	n=fun(s);
	printf("%ld\n",n);
}
