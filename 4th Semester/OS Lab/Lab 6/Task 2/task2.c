#include<stdio.h>
#include<unistd.h>

int main()
{
	fork();
	fork();
	printf("Parent Process ID:%d\n",getppid());
}
