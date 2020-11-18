#include<stdio.h>
void fun(char s[])
{int i, j;
 for(i=j=0;s[i]!= '\0';i++)
    if(s[i]!= 'c')
/************found************/
       _____1____=s[i];
/************found************/
 s[j]=_____2_____;
}
main()
{ char s[80];
  printf("\nEnter a string:    "); gets(s);
  printf("The original string:  "); puts(s);
  fun(s);
  printf("The string after deleted: ");
  puts(s);
  printf("\n\n ");
}    
