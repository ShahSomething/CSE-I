#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid; 
	printf("%d: My Name is 1.\n",getpid());
	printf("%d: My Parent ID is %d.\n",getpid(),getppid());
	printf("%d: Creating a Child Process.\n",getpid());
	pid=fork();
	if(pid==0)
	{
		printf("%d: My Name is 2.\n",getpid());
		printf("%d: My Parent ID is %d.\n",getpid(),getppid());
		printf("%d: Creating a Child Process.\n",getpid());
		pid=fork();
		if(pid==0)
		{
			printf("%d: My Name is 3a.\n",getpid());
			printf("%d: My Parent ID is %d.\n",getpid(),getppid());
			printf("%d: Creating a Child Process.\n",getpid());
			pid=fork();
			if(pid==0)
			{
				printf("%d: My Name is 4a.\n",getpid());
				printf("%d: My Parent ID is %d.\n",getpid(),getppid());
				printf("%d: Creating a Child Process.\n",getpid());
				pid=fork();
				if(pid==0)
				{
					printf("%d: My Name is 5a.\n",getpid());
					printf("%d: My Parent ID is %d.\n",getpid(),getppid());
				}
				else
				{
					sleep(2);
					printf("%d: Creating a Child Process.\n",getpid());
					pid=fork();
					if(pid==0)
					{
						printf("%d: My Name is 5b.\n",getpid());
						printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					}
				}
			}
			else
			{
				sleep(2);
				printf("%d: Creating a Child Process.\n",getpid());
				pid=fork();
				if(pid==0)
				{
					printf("%d: My Name is 4b.\n",getpid());
					printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					printf("%d: Creating a Child Process.\n",getpid());
					pid=fork();
					if(pid==0)
					{
						printf("%d: My Name is 5c.\n",getpid());
						printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					}
					else
					{
						sleep(2);
						printf("%d: Creating a Child Process.\n",getpid());
						pid=fork();
						if(pid==0)
						{
							printf("%d: My Name is 5d.\n",getpid());
							printf("%d: My Parent ID is %d.\n",getpid(),getppid());
						}
					}
				}
			}
		}
		else
		{
			sleep(2);
			printf("%d: Creating a Child Process.\n",getpid());
			pid=fork();
			if(pid==0)
			{
				printf("%d: My Name is 3b.\n",getpid());
				printf("%d: My Parent ID is %d.\n",getpid(),getppid());
				printf("%d: Creating a Child Process.\n",getpid());
				pid=fork();
				if(pid==0)
				{
					printf("%d: My Name is 4c.\n",getpid());
					printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					printf("%d: Creating a Child Process.\n",getpid());
					pid=fork();
					if(pid==0)
					{
						printf("%d: My Name is 5e.\n",getpid());
						printf("%d: My Parent ID is %d.\n",getpid(),getppid());
					}
					else
					{
						sleep(2);
						printf("%d: Creating a Child Process.\n",getpid());
						pid=fork();
						if(pid==0)
						{
							printf("%d: My Name is 5f.\n",getpid());
							printf("%d: My Parent ID is %d.\n",getpid(),getppid());
						}
					}
				}
				else
				{
					sleep(2);
					printf("%d: Creating a Child Process.\n",getpid());
					pid=fork();
					if(pid==0)
					{
						printf("%d: My Name is 4d.\n",getpid());
						printf("%d: My Parent ID is %d.\n",getpid(),getppid());
						printf("%d: Creating a Child Process.\n",getpid());
						pid=fork();
						if(pid==0)
						{
							printf("%d: My Name is 5g.\n",getpid());
							printf("%d: My Parent ID is %d.\n",getpid(),getppid());
						}
						else
						{
							sleep(2);
							printf("%d: Creating a Child Process.\n",getpid());
							pid=fork();
							if(pid==0)
							{
								printf("%d: My Name is 5h.\n",getpid());
								printf("%d: My Parent ID is %d.\n",getpid(),getppid());
							}
						}
					}
				}
			}
			
		}
	}
	sleep(2);
}

