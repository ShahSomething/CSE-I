#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid;
	printf("%d: My Name is 1.\n",getpid());
	printf("%d: My Parent ID is %d.\n",getpid(),getppid());
	printf("%d: Creating a Child.\n",getpid());
	pid=fork();
	if(pid==0)
	{
		printf("%d: My Name is 2.\n",getpid());
		printf("%d: My Parent ID is %d.\n",getpid(),getppid());
		printf("%d: Creating a Child.\n",getpid());
		pid=fork();
		if(pid==0)
		{
			printf("%d: My Name is 3.\n",getpid());
			printf("%d: My Parent ID is %d.\n",getpid(),getppid());
			printf("%d: Creating a Child.\n",getpid());
			pid=fork();
			if(pid==0)
			{
				printf("%d: My Name is 4.\n",getpid());
				printf("%d: My Parent ID is %d.\n",getpid(),getppid());
				printf("%d: Creating a Child.\n",getpid());
				pid=fork();
				if(pid==0)
				{
					printf("%d: My Name is 5.\n",getpid());
					printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					printf("%d: Creating a Child.\n",getpid());
					pid=fork();
					if(pid==0)
					{
						printf("%d: My Name is 6.\n",getpid());
						printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					}
				}
			}
			
		}
	}
	sleep(5);
}
