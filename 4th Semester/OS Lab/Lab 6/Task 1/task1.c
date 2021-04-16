#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("Process ID is:%d\n",getpid());
	printf("Parent Process ID is:%d\n",getppid());
	sleep(60);
	printf("I'm Awake!\n");

}
