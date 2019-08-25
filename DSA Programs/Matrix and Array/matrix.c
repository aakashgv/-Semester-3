#include<stdio.h>
#include<stdlib.h>
struct node{
 int val;
 struct node *down,*nxt;
};
struct node *head;
struct node *CreateNode(int x){
 struct node *n;
 n=(struct node *)malloc(sizeof(struct node));
 if(NULL==n){
  printf("\n N is NULL");
 }
 n->val=x;
 n->nxt=NULL;
 return n;
}
struct node *end(int n,int m){
 int x,i,j;
 struct node *tmp,*tail,*flag;
 head=NULL;
 tail=NULL;
 for(i=0;i<n;i++){
  for(j=0;j<m;j++){
   printf("\nEnter the element %d,%d : ",i+1,j+1);
   scanf("%d",&x);
   tmp=CreateNode(x);
   if(head==NULL){
    head=tmp;
    tail=tmp;
    flag=head;
   }//if
   else if(i>=1&&j==0){
    head->down=tmp;
    head=tmp;
    tail->down=tmp;
    tail=tmp;
   }
   else{
    tail->nxt=tmp;
    tail=tmp;
    head->down=NULL;
   }
  }//for-jloop
 }//i-loop
 head=flag;
}//function
struct node *display(struct node *head,int n,int m)
{
 int i,j;
 struct node *tmp,*temp;
 tmp=head;
 temp=head;
 while(tmp!=NULL){
  temp=tmp;
  while(temp!=NULL){
   printf("%d->",temp->val);
   temp=temp->nxt;
  }//temp-loop
  if(temp==NULL)
   printf("NULL");
  tmp=tmp->down;
  printf("\n↓\n");
 }//i-loop
 if(tmp==NULL)
  printf("NULL");
}
void main()
{
 int n,m;
 printf("\nEnter the number of rows and columns respectively: ");
 scanf("%d %d",&n,&m);
 head=end(n,m);
 display(head,n,m);
}
