#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node{
int val;
struct node *nxt;
struct node *digits;
};
struct node *tmp2, *tmp, *ptr, *head=NULL, *tail=NULL, *n;
struct node *temp2, *temp, *prt, *tail2= NULL, *news;


struct node *create_node(int x){
 n= (struct node*)malloc(sizeof(struct node));
 if(NULL==n){
	printf("\n Node not initialized!");
	}
 else{
 n->val=x;
  n->nxt=NULL;
 n->digits=NULL;
 return n;
 }
 return n;
}

struct node *create_node2(int x){
 news= (struct node*)malloc(sizeof(struct node));
 if(NULL==news)
	printf("\n Node2 not initialized!");
 else{
 news->val=x;
 news->nxt=NULL;
 }
 return news;
}

void op(){
int m, n, value;
char ans;
printf("\n Enter Value: ");
scanf("%d", &value);
tmp= create_node(value);

if(head==tail && NULL==head){
 head=tail=tmp;
 }
else{
 tail->nxt=tmp;
 tail=tmp;
 }
 printf("\n More? (y/n): ");
 scanf(" %c", &ans);
 while('y'==ans){
   printf("\n Enter Value: ");
   scanf(" %d", &n);
   temp= create_node2(n);
   if(tmp->digits==NULL){
    tmp->digits =tail2 = temp;
    }
   else{
   tail2->nxt=temp;
   tail2=temp;
   }
   printf("\n More? (y/n): ");
   scanf(" %c", &ans);
  }

}


void main(){
clrscr();
char ans='y';
while(ans=='y'){
op();
printf("\n Enter More Rows? (y/n): ");
scanf(" %c", &ans);
}

ptr=head;
while(ptr!=NULL)  {
 printf("\n Value is: %d", ptr->val);
 prt=ptr->digits;
   while(prt!=NULL){
	if(prt->nxt==NULL)
		printf(" -> %d ", prt->val);
	else
		printf(" -> %d ", prt->val);
    prt=prt->nxt;
    }
 ptr=ptr->nxt;
 }
 getch();
}