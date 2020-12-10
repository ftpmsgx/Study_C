#include <stdio.h>
#include <string.h>

int main()
{
        int score;
        char s;
        printf("Please a score:");
        scanf("%d",&score);
        if(score>=90)
                s='A';
        else if(score>=80)
                s='B';
        else if(score>=70)
                s='C';
        else if(score>=60)
                s='D';
        else
                s='E';
        printf("Score : %c\n",s);
}
