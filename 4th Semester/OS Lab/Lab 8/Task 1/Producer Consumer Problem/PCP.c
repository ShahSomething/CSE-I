#include <stdio.h>
#include <pthread.h>

void *Producer(void *);
void *Consumer(void *);

void wait(int *s)
{
	while(s<=0);
	s--;
}

void signal(int *s)
{
	s++;
}


int empty=1,full=0,sm=1;
int global=100;

int main()
{
	pthread_t ptid,ctid;
	pthread_create(&ptid,NULL,Producer,NULL);
	pthread_create(&ctid,NULL,Consumer,NULL);
	pthread_join(ptid,NULL);
	pthread_join(ctid,NULL);
}

void *Producer(void *param)
{
	int i=0;
	while(i<2)
	{
		wait(&empty);
			wait(&sm);
				global+=100;
			signal(&sm);
		signal(&full);
		i++;
		printf("Producer: Global: %d\n",global);
	}
	
}

void *Consumer(void *param)
{
	int i=0;
	while(i<2)
	{
		wait(&full);
			wait(&sm);
				global-=25;
			signal(&sm);
		signal(&empty);
		i++;
		printf("Consumer: Global: %d\n",global);
	}
}












