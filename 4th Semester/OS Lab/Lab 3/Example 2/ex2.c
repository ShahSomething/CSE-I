#include <stdio.h>
int main(void){
int a;
int *p;
printf("Enter an Integer: ");
scanf("%d",&a);
p=&a;
printf("The value of the variable a is %d\n",a);
printf("The address of the variable a is %x\n",&a);
printf("The value of variable p is %x\n",p);
printf("The value pointed by p is *P = %d\n",*p);
printf("The address of p is %x\n",&p);
return 0;
}
