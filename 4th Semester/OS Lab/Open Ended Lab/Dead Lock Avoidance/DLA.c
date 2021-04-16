#include <stdio.h>

int main()
{
	int num_p,num_r,i,j,k;
	printf("Enter the number of Processes: ");
	scanf("%d",&num_p);
	printf("Enter the number of Resources: ");
	scanf("%d",&num_r);
	char ch='A';
	int resource_instance[num_r];
	for(i=0;i<num_r;i++)
	{
		printf("Enter the number of instances of Resource %c: ",ch);
		scanf("%d",&resource_instance[i]);
		ch+=1;
	}
	
	int alloc[num_p][num_r];
	for(i=0;i<num_p;i++)
	{
		ch='A';
		printf("Enter the Allocated Instances of Resources for P%d:\n",i);
		for(j=0;j<num_r;j++)
		{
			printf("No of Instances of Resource %c Allocated to P%d: ",ch,i);
			scanf("%d",&alloc[i][j]);
			ch+=1;
		}
	}
	int max[num_p][num_r];
	for(i=0;i<num_p;i++)
	{
		ch='A';
		printf("Enter the Maximum Instances of Resources for P%d:\n",i);
		for(j=0;j<num_r;j++)
		{
			printf("Maximum No of Instances of Resource %c Allowed to P%d: ",ch,i);
			scanf("%d",&max[i][j]);
			ch+=1;
		}
	}
	int available[num_r];
	for(j=0;j<num_r;j++)
	{
		int sum=0;
		for(k=0;k<num_p;k++)
			sum+=alloc[k][j];
		available[j]=resource_instance[j]-sum;			
	}
	int f[num_p];
	for(i=0;i<num_p;i++)
		f[i]=0;
	int need[num_p][num_r];
	for(i=0;i<num_p;i++)
	{
		for(j=0;j<num_r;j++)
			need[i][j]=max[i][j]-alloc[i][j];
	}
	int index=0,y,ans[num_p];
	for(i=0;i<num_p;i++)
	{
		for(j=0;j<num_p;j++)
		{
			if(f[j]==0)
			{
				int flag=0;
				for(k=0;k<num_r;k++)
				{
					if(need[j][k]>available[k])
					{
						flag=1;
						break;
					}		
				}
				if(flag==0)
				{
					ans[index++]=j;
					for(y=0;y<num_r;y++)
						available[y]+=alloc[j][y];
					f[j]=1;
				}			
			}
		}
	}
	printf("Following is the safe sequence to Avoid Dead-Lock: \n");
	for(i=0;i<num_p-1;i++)
		printf("P%d -->",ans[i]);
	printf("P%d\n",ans[num_p-1]);
	return 0;
}
