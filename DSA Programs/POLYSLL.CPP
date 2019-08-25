#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node{
int coeff;
int pow;
struct node *nxt;
};
struct node *n, *ptr, *head= NULL, *tail= NULL, *tmp;

void create_node(){
int p, i;
printf("\n Enter Highest Polynomial: ");
scanf("%d", &p);

for(i=0; i<=p; i++){

 n= (struct node*)malloc(sizeof(struct node));
 if(NULL==n){
    printf("\n Memory not allocated! ");
  }
 else{
  n->pow=i;
 printf("\n Enter coefficient for power %d : ", n->pow);
 scanf(" %d", &n->coeff);
 n->nxt=NULL;
  }
 if(NULL==head && head==tail){
   head=tail=n;
  }
 else{
  n->nxt=head;
  head=n;
  }
 }
}

void disp(){
ptr= head;
while(ptr!=0){
 if(ptr->nxt!=NULL)
  printf(" %dx^%d +", ptr->coeff, ptr->pow);
 else
  printf(" %d", ptr->coeff);
 ptr=ptr->nxt;
 }
}

void diff(){
 ptr=head;
 while(ptr!=NULL){
  ptr->coeff= ptr->coeff*ptr->pow;
  ptr->pow= ptr->pow -1;
  ptr=ptr->nxt;
  }
}
void main(){
clrscr();
 printf("\n -- POLYNOMIAL IMPLEMENTATION WITH LINKED LIST -- \n");
create_node();
disp();
printf("\n Differentiating your polynomial: \n");
diff();     printf("\n");
disp();
getch();

}