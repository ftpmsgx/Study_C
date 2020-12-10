#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
        char s[8];
        int i,n=0,j;
        printf("Please input a string(strlen<=7):");
        gets(s);
        if(s[0]=='+'||s[0]=='-')
        {
                        for(i=strlen(s)-1,j=0;i>=1;i--,j++)
                                n+=pow(10,j)*(s[i]-48);
                        if(s[0]=='-')
                                n*=-1;
        }
        else
                for(i=strlen(s)-1,j=0;i>=0;i--,j++)
                        n+=pow(10,i)*(s[j]-48);
        printf("N=%d\n",n);
        return 0;
}
