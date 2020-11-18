#include <stdio.h>
#include <string.h>
void fun(char str[], char ch)
{   	int i=0;
/************found************/
	while(str[i]&&  _____1_____    )		
		i++;
/************found************/
    if(str[i]!=ch)
    {  		str[i]=ch;
		  ____2____	
    }
}
void main( )
{   char s[81],c; 	printf( "\nPlease enter a string:\n" );  
	gets (s);	printf ("\n Please enter the character to search : " );
	c=getchar(); 	fun(s,c) ;
	printf( "\nThe result  is %s\n",  s);
}
