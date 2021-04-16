#include<stdio.h>
#include<pthread.h>

void *kidfunc(void *p)
{
	printf("Kid id is -----> %d\n",getpid());
}

int main()
{
	pthread_t kid;
	pthread_create(&kid,NULL,kidfunc,NULL);
	printf("Parent id is -----> %d\n",getpid());
	pthread_join(kid,NULL);
	printf("No more kid!\n");

}
