#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_LIST_SIZE 100
#define FALSE 0
#define TRUE 1
typedef struct {
int number;
char *string;
} ELEMENT_TYPE;
typedef struct {
int last;
ELEMENT_TYPE a[MAX_LIST_SIZE];
} LIST_TYPE;
typedef int WINDOW_TYPE;
/** position following last element in a list ***/
WINDOW_TYPE end(LIST_TYPE *list) {
return(list->last+1);
}

int error(char *s) {
printf("Error: %s\n", s);
return 0;
}
/*** empty a list ***/
WINDOW_TYPE empty(LIST_TYPE *list) {
list->last = -1;
return(end(list));
}
/*** test to see if a list is empty ***/
int is_empty(LIST_TYPE *list) {
if (list->last == -1)
return(TRUE);
else
return(FALSE) ;	}	// Missing semi colon added
/*** position at first element in a list ***/
WINDOW_TYPE first(LIST_TYPE *list) {
if (is_empty(list) == FALSE)
return(0);
else
return(end(list));
}
/*** position at last element in a list ***/
WINDOW_TYPE last(LIST_TYPE *list) {
return(list->last);}

/*** position at next element in a list ***/
WINDOW_TYPE next(WINDOW_TYPE w, LIST_TYPE *list) {
if (w == last(list)) {
return(end(list)); }
else if (w == end(list)) {
error("can’t find next after end of list"); }
else {
return(w+1);
} }
/*** position at previous element in a list ***/
WINDOW_TYPE previous(WINDOW_TYPE w, LIST_TYPE *list) {
if (w != first(list)) {
return(w-1); }
else {
error("can’t find previous before first element of list");
return(w); } }


