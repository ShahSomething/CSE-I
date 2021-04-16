#include <stdio.h> 
void add(int x, int y, int *z){ 
     *z =  x+y; } 
main (void) { 
        int     a, b, r; 
        printf ("Enter the values for integers a and b\n") ; 
        scanf ("%d  %d", &a, &b); 
        add(a,b,&r); 
        printf ("The result is = %d\n", r); 
} 
