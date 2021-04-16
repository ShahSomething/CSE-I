#include <stdio.h>
const int pid=0;
const int arrival=1;
const int burst=2;
const int start=3;
const int end=4;
const int remain_time=5;
const int wait=6;
const int tat=7;
const int info=8;
const int num_p=4;
int main()
{
	int process[num_p][info],i,j,time,complete=0;
	int minm=9999,smallest=0,check=0;
	for(i=0;i<num_p;i++)
	{
		process[i][pid]=i;
		printf("Enter the Burst time for Process %d: \n",i);
		scanf("%d",&process[i][burst]);
		printf("Enter the Arrival time for Process %d: \n",i);
		scanf("%d",&process[i][arrival]);
		process[i][remain_time]=process[i][burst];
	}
	for(time=0;complete!=num_p;time++)
	{
		for(j=0;j<num_p;j++)
		{
			if(process[j][arrival]<=time && process[j][remain_time]<minm && process[j][remain_time]>0)
			{
				minm= process[j][remain_time];
				smallest=j;
				check=1;
			}
		}
		if(check==0)
			continue;
		process[smallest][remain_time]--;
		minm=process[smallest][remain_time];
		if(minm==0)
			minm=9999;
		if(process[smallest][remain_time]==0)
		{
			complete++;
			check=0;
			process[smallest][end]=time+1;
			process[smallest][wait]=process[smallest][end]-process[smallest][burst]-process[smallest][arrival];
			if(process[smallest][wait]<0)
				process[smallest][wait]=0;
		}
	}
	for(i=0;i<num_p;i++)
		process[i][tat]=process[i][wait]+process[i][burst];
	printf("PID	Arrival	Burst	End	Wait	TAT\n");
	for(i=0;i<num_p;i++)
	{
		printf("%d \t %d \t %d \t %d \t %d \t %d \n",process[i][pid],process[i][arrival],
		process[i][burst],process[i][end],process[i][wait],process[i][tat]);	
	}
}


