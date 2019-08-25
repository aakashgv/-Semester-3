
#include <stdio.h>

#include <stdlib.h>

struct Node
{
    
int value;
    
struct Node *next;

};
 



void push(struct Node ** head, int x)

{
    struct Node* newnode = 
(struct Node*) malloc(sizeof(struct Node));

    newnode->value  = x;

    newnode->next = (*head);
  
  (*head)  = newnode;

}


 
void printList(struct Node *head)
{
  
  struct Node *temp = head;

    while (temp != NULL)
{

      printf("%d ", temp->value);
 
       temp = temp->next;
  
      }

    printf("\n");


 
}


void merge(struct Node *p, struct Node **q){
 
    struct Node *pcurr = p, *qcurr = *q;

    struct Node *pnext, *qnext;

 
   while (pcurr != NULL && qcurr != NULL)
   
  {
  pnext = pcurr->next;

     qnext = qcurr->next;
 

     qcurr->next = pnext;  
        
     pcurr->next = qcurr;  
 

     pcurr = pnext;

     qcurr = qnext;
    }
 
   
 *q = qcurr;


}


int main()
{
struct Node *p = NULL, *q = NULL;
  
   push(&p, 3);
 
    push(&p, 2);
   
  push(&p, 1);
   
  printf("First Linked List:\n");
 
    printList(p);
 
 
    push(&q, 8);
   
  push(&q, 7);
    
 push(&q, 6);
     
push(&q, 5);
   
  push(&q, 4);
   
  printf("Second Linked List:\n");
  
   printList(q);
 
 
    merge(p, &q);
 

     printf("Modified First Linked List:\n");

     printList(p);
 
   
  printf("Modified Second Linked List:\n");
  
   printList(q);
 

     getchar();
   

  return 0;
}

