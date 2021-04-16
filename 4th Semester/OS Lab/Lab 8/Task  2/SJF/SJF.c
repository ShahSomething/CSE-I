#include <stdio.h>
const int pid=0;
const int arrival=1;
const int burst=2;
const int start=3;
const int end=4;
const int wait=5;
const int tat=6;
const int info=7;
const int num_p=4;
int main()
{
	int process[num_p][info],i,j;
	for(i=0;i<num_p;i++)
	{
		process[i][pid]=i;
		process[i][arrival]=i;
		printf("Enter the Burst time for Process %d: \n",i);
		scanf("%d",&process[i][burst]);
		for(j=i;j>=0;j--)
		{
			if(process[j][pid]==0)
				continue;
			else
			{
				if(process[j][burst]<process[j-1][burst])
				{
					int temp=process[j-1][burst];
					process[j-1][burst]=process[j][burst];
					process[j][burst]=temp;
				}
			}
		}
	}
	for(i=0;i<num_p;i++)
	{
		if(!i)
			process[i][start]=0;
		else
			process[i][start]=process[i-1][end];
		process[i][end]=process[i][start]+process[i][burst];
		process[i][wait]=process[i][start]-process[i][arrival];
		process[i][tat]=process[i][wait]+process[i][burst];
	}

	printf("PID	Arrival	Burst	Start	End	Wait	TAT\n");

	for(i=0;i<num_p;i++)
	{
		printf("%d \t %d \t %d \t %d \t %d \t %d \t %d \n",process[i][pid],process[i][arrival],
		process[i][burst],process[i][start],process[i][end],process[i][wait],process[i][tat]);	
	}
}

