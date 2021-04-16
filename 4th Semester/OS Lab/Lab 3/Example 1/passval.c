#include <stdio.h>
int add ( int x, int y )
{
	return x+y;
}

int main(void)
{
	int a, b;
	printf("Please enter the values of integers a and b \n");
	scanf("%d %d",&a,&b);
	printf("The Result is: %d\n",add(a,b));
	return 0;
}
