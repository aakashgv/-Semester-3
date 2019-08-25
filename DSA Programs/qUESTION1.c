#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *nxt,*prev;
};
struct node *head,*head2,*news;

struct node *CreateNode(int x){
 struct node *n;
 n=(struct node *)malloc(sizeof(struct node));
 if(NULL==n){
  printf("\n N is NULL");
 }
 n->data=x;
 n->nxt=NULL;
 return n;
}
struct node *EndNode(int n){
 struct node *head,*tmp,*tail;
 int i,x;
 head=NULL;
 tail=NULL;
 if(n<=0){
  printf("\nThe value of n is 0");
  exit(0);
 }
 for(i=0;i<n;i++){
  printf("\nEnter the element: ");
  scanf("%d",&x);
  tmp=CreateNode(x);
  if(NULL==head){
   head=tmp;
   tail=tmp;
  }
  else{
   tmp->prev=tail;
   tail->nxt=tmp;
   tail=tmp;
  }  
 }
return head;
}
struct node *EndNode1(int n){
 struct node *head2,*tmp,*end;
 int i,x;
 head2=NULL;
 end=NULL;
 if(n<=0){
  printf("\nNot Allowed");
  exit(0);
 }
 for(i=0;i<n;i++){
  printf("\nEnter the element: ");
  scanf("%d",&x);
  tmp=CreateNode(x);
  if(NULL==head2){
   head2=tmp;
   end=tmp;
  }
  else{
   tmp->prev=end;
   end->nxt=tmp;
   end=tmp;
  }  
 }
return head2;
}

void inter()
{
 struct node *tmp,*temp,*new2,*t1,*t2;
 tmp=head;
 temp=head2;
 t1=head2;
 news=NULL;
 new2=NULL;
 while(tmp!=NULL)
 {
  temp=t1;
  while(temp!=NULL){
   if(tmp->data==temp->data){
    if(NULL==news){
     news=tmp;
     new2=tmp;
    }
    else{
     tmp->prev=new2;
     new2->nxt=tmp;
     new2=tmp;
    }
   }
  temp=temp->nxt;
 }
 tmp=tmp->nxt;
 }
}
void Display2()
{
 struct node *tmp;
 tmp=news;
 printf("\nThe array is: ");
 while(tmp!=NULL){
  printf("%d ",tmp->data);
  tmp=tmp->nxt;
 }
} 
void main()
{
 int no1,no2;
 printf("\nNumber in list 1: ");
 scanf("%d",&no1);
 head=EndNode(no1);

 printf("\nNumber in list 2: ");
 scanf("%d",&no2);
 head2=EndNode1(no2);
 
 inter();
 Display3(); 
}
