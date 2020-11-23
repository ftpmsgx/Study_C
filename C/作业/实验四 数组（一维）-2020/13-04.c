#include <stdio.h>

int main()
{
	float score[10],sum;
	int i,j,t;
	sum=0.0;
	printf("Please input 10 Students\' score:");
	for(i=0;i<=9;i++)
		scanf("%f",&score[i]);
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(score[j]>score[j+1])
				t=score[j],score[j]=score[j+1],score[j+1]=t;
	for(i=1;i<=8;i++)
		sum+=score[i];
	printf("Average:%f\n",sum/8);
}
