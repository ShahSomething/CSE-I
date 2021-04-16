#include<stdio.h> 
#define MAX_SIZE 5 
void main() { 
int first[MAX_SIZE], second[MAX_SIZE], diff[MAX_SIZE], i; 
printf("\nEnter %d data items for first array : ", MAX_SIZE); 
for(i=0;i<MAX_SIZE; i++)
{ 
	scanf("%d", &first[i] ); 
} 
printf("\nEnter %d  data items for second array : ",  MAX_SIZE); 
for(i=0;i<MAX_SIZE; i++) // input second array  
	scanf("%d",&second[i]); 
for(i=0;i<MAX_SIZE; i++)   // compute the differences 
	diff[i]=second[i] - first[i]; 
printf("\n\nOutput of the arrays : "); 
for(i=0;i<MAX_SIZE; i++)   // output the arrays 
	printf("\n\n%5d %5d %5d", first[i],  second[i],  diff[i]); 
printf("\n");
} 
