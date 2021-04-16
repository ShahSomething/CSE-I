#include <pthread.h>
#include <stdio.h>

void *ChildThread(int argument)
{
	int i;
	for(i=1;i<=argument;++i)
		printf("Child count-%d\n",i);	
}

int main()
{
	pthread_t hThread;
	int ret,count;
	printf("Enter the Thread Count: ");
	scanf("%d",&count);
	ret=pthread_create(&hThread,NULL,(void *)ChildThread,count);
	if(ret<0)
	{
		printf("Thread creation Failed\n");
		return 1;
	}
	pthread_join(hThread,NULL);
	printf("Parent is continuing....\n");
	return 0;

}
