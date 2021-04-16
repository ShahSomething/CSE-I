#include <stdio.h>
#include <stdlib.h>
#include<string.h>


#define Max_size 50
struct node {
  char *name;
  struct node *next;
};
int count = 0;
typedef enum {false=0,true}Boolean;



void add(char *name,struct node *head)
{
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));

    if(head==NULL)
    {
        head = n;
        n->name=name;
        n->next =NULL;
        printf("Name %s added to the list.\n",name);
        return;
    }
    count++;

    while(head->next!=NULL)
        head= head->next;
    head->next = n;
    n->next= NULL;
    printf("Name %s added to the list.\n",name);

}

Boolean Search(char *name,struct node *head)
{
    if (head == NULL)
        return false;
    while(head!=NULL)
    {
        if(head->name==name)
            return true;
    }
    return false;
}


int main () {
  int i;
  struct node *start = NULL;
  char *name;

  for (;;) {
    printf("1. Add an element to the List.\n");
    printf("2. Search for an element in the list.\n");
    printf("3. Exit\n");

    scanf("%d", &i);

    if (i == 1) {
      printf("Enter value of element\n");
      scanf("%s",name);
      add(name,start);
    }
    else if (i == 2) {
      printf("Enter value of element\n");
      scanf("%s",name);
      if(Search(name,start))
      {
          printf("Name Found.\n");
      }
      else
        printf("Name not Found.\n");

    }
    else if (i == 3)
      break;
    else
      printf("Please enter valid input.\n");
  }

  return 0;
}
