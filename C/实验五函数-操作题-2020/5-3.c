#include <stdio.h>

int fb(int x)
{
	if(x==1||x==2)
		return 1;
	return fb(x-1)+fb(x-2);
}
int main()
{
	int i;
	for(i=1;i<=40;i++)
		printf("%10d",fb(i));
	putchar('\n');
}
