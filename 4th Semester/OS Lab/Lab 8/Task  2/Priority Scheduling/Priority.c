#include <stdio.h>
const int pid=0;
const int priority=1;
const int arrival=2;
const int burst=3;
const int start=4;
const int end=5;
const int wait=6;
const int tat=7;
const int info=8;
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
		printf("Enter the Priority for Process %d: \n",i);
		scanf("%d",&process[i][priority]);
		for(j=i;j>=0;j--)
		{
			if(process[j][pid]==0)
				continue;
			else if(process[j][priority]<process[j-1][priority])
			{
				int temp1=process[j-1][priority];
				process[j-1][priority]=process[j][priority];
				process[j][priority]=temp1;
				int temp2=process[j-1][burst];
				process[j-1][burst]=process[j][burst];
				process[j][burst]=temp2;
				int temp3=process[j-1][pid];
				process[j-1][pid]=process[j][pid];
				process[j][pid]=temp3;
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
	printf("PID	Priority Arrival Burst Start	 End	 Wait	 TAT\n");
	for(i=0;i<num_p;i++)
	{
		printf("%d \t %d \t %d \t %d \t %d \t %d \t %d \t %d \n",process[i][pid],process[i][priority],
		process[i][arrival],process[i][burst],process[i][start],process[i][end],process[i][wait],process[i][tat]);	
	}
}


