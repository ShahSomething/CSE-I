#include <pthread.h>
#include <stdio.h>

void *ChildThread(void *argument)
{
	int i;
	for(i=1;i<=20;++i)
		printf("Child count-%d\n",i);
	pthread_exit(NULL);
}

int main()
{
	pthread_t hThread;
	int ret;
	ret=pthread_create(&hThread,NULL,(void *)ChildThread,NULL);
	if(ret<0)
	{
		printf("Thread creation Failed\n");
		return 1;
	}
	pthread_join(hThread,NULL);
	printf("Parent is continuing....\n");
	return 0;

}
