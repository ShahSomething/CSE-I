#include <pthread.h>
#include <stdio.h>

int glob_data=5;

void* kidfunc(void*p)
{
	printf("Kid here.Global data was %d.\n",glob_data);
	glob_data=15;
	printf("Kid Again.Global data was now %d.\n",glob_data);
}

int main()
{
	pthread_t kid;
	pthread_create(&kid,NULL,kidfunc,NULL);
	printf("Parent here.Global data = %d.\n",glob_data);
	glob_data=10;
	pthread_join(kid,NULL);
	printf("End of program.Global data = %d.\n",glob_data);
}
