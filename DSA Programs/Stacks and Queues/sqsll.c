#include<stdio.h>
#include<malloc.h>

struct node{
int val;
struct node *nxt;
};

struct node *new, *tmp, *ptr, *head=NULL, *tail=NULL, *head2=NULL, *tail2=NULL, *prt ;

struct node *create_node(int x){
new= (struct node*)malloc(sizeof(struct node));

if(new==NULL){
 printf("\n Memory not allocated!");
 return new;
 }
else{
 new->val= x;
 new->nxt=NULL;
 }


}

void ins_stack(){
int value;
printf("\n Enter Stack Value: ");
scanf("%d", &value);
tmp= create_node(value);

if(head==NULL && head==tail)
	head=tail=tmp;
else{
tmp->nxt=head;
head=tmp; 
}

}

void ins_qu(){
int value;
printf("\n Enter Queue Value: ");
scanf("%d", &value);
tmp= create_node(value);

if(head==NULL && head==tail)
	head2=tail2=tmp;
else{
tmp->nxt=head2;
head2=tmp; 
}
}

void pop_stack(){
if(head==NULL)
	printf("\n Empty Stack!");
else{
printf("\n Popping %d:", head->val);
struct node *temp= head;
head= head->nxt;
free(temp);
}


}

void pop_qu(){
if(head2==NULL)
	printf("\n Empty Queue");
else{
  prt= head2;
  while(prt->nxt->nxt!=NULL)
	{
	 prt= prt->nxt;}
  printf("\n Deleting %d: ",prt->nxt->val);
  tail2=prt;
  free(prt->nxt);
  prt->nxt=NULL;
 }

}

void disp_q(){
struct node *prt;
prt=head2;
while(ptr!=NULL){

printf("%d ", prt->val);
prt=prt->nxt;}
}

void disp_s(){
ptr=head;
while(ptr!=NULL){

printf("%d ", ptr->val);
ptr=ptr->nxt;}
}

void main(){

char ans='y';
while(ans=='y'){
ins_stack();
printf("\n Enter more? (y/n): ");
scanf(" %c", &ans);
}
printf("\n Stack= ");
disp_s();
pop_stack();
printf("\n New Stack: ");
disp_s();

char a='y';
while(a=='y'){
ins_qu();
printf("\n Enter More? (y/n): ");
scanf(" %c", &a);
}

printf("\n Queue= ");

prt=head2;
while(prt!=NULL){
printf("%d ", prt->val);
prt=prt->nxt;
}

pop_qu();

printf("\n New Queue: ");

prt=head2;
while(prt!=NULL){
printf("%d ", prt->val);
prt=prt->nxt;
}



}
