#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid;
	printf("%d: I'm the Parent Process.\n",getpid());
	printf("%d: Creating Child 1.\n",getpid());
	pid=fork();
	if(pid==0)
	{
		printf("%d: I'm Child 1.\n",getpid());
		printf("%d: My Parent ID is %d.\n",getpid(),getppid());
	}
	else
	{
		sleep(2);
		printf("%d: Creating Child 2.\n",getpid());
		pid=fork();
		if(pid==0)
		{
			printf("%d: I'm Child 2.\n",getpid());
			printf("%d: My Parent ID is %d.\n",getpid(),getppid());
		}
		else
		{
			sleep(2);
			printf("%d: Creating Child 3.\n",getpid());
			pid=fork();
			if(pid==0)
			{
				printf("%d: I'm Child 3.\n",getpid());
				printf("%d: My Parent ID is %d.\n",getpid(),getppid());
			}
			else
			{
				sleep(2);
				printf("%d: Creating Child 4.\n",getpid());
				pid=fork();
				if(pid==0)
				{
					printf("%d: I'm Child 4.\n",getpid());
					printf("%d: My Parent ID is %d.\n",getpid(),getppid());
				}
				else
				{
					sleep(2);
					printf("%d: Creating Child 5.\n",getpid());
					pid=fork();
					if(pid==0)
					{
						printf("%d: I'm Child 5.\n",getpid());
						printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					}
					else
					{
						sleep(2);
						printf("%d: Creating Child 6.\n",getpid());
						pid=fork();
						if(pid==0)
						{
							printf("%d: I'm Child 6.\n",getpid());
							printf("%d: My Parent ID is %d.\n",getpid(),getppid());
						}
						else
						{
							sleep(2);
							printf("%d: Creating Child 7.\n",getpid());
							pid=fork();
							if(pid==0)
							{
								printf("%d: I'm Child 7.\n",getpid());
								printf("%d: My Parent ID is %d.\n",getpid(),getppid());
							}
			
						}
			
					}
		
				}
		
			}
		
		}
	}
}















