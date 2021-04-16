#include <stdio.h>
#include <pthread.h>
void *func1(void *);
void *func2(void *);
int Lock=0;
int global=100;
int main()
{
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,func1,NULL);
	pthread_create(&tid2,NULL,func2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
}
int TestAndSet(int *Lock)
{
	int temp= *Lock;
	*Lock=1;
	return temp;
}
void *func1(void *param)
{
	int i=0;
	while(i<2)
	{
		while(TestAndSet(&Lock));
		global+=100;
		Lock=0;
		i++;
		printf("First Thread: Global: %d\n",global);
	}

}
void *func2(void *param)
{
	int i=0;
	while(i<2)
	{
		while(TestAndSet(&Lock));
		global-=25;
		Lock=0;
		i++;
		printf("Second Thread: Global: %d\n",global);
	}
}













