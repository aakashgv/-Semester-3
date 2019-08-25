#include<stdio.h>
#include<stdlib.h>
struct node{
	int val;
	struct node *nxt;
	};
struct node *head;
struct node *CreateNode(int x){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	if(NULL==n){
		printf("\n n is NULL");
	}
	n->val=x;
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
			tail->nxt=tmp;
			tail=tmp;
		}
	}
return head;
}

struct node *Display(struct node *head)
{
	printf("\nThe array is: ");
	while (head != NULL)
	{
		printf("%d ", head->val);
		head = head->nxt;
	}
	}

struct node *Insert(struct node *head,int num)
{
	struct node *tail,*tmp,*p;
	int m,no;
	printf("\nEnter the number where your element should be added: ");
	scanf("%d",&m);
	printf("\nEnter the element to be added: ");
	scanf("%d",&no);
	tmp=CreateNode(no);
	p=head;
	p->nxt=head->nxt;
	int value,value1;
	tail->nxt=NULL;
	value=head->val;
	value1=tail->val;
	if(value==m){
		tmp->nxt=head;
		head=tmp;
	}
	else if(m==value1){
		tail->nxt=tmp;
		tail=tmp;
		tail->nxt=NULL;
	}

 else{
  while(p!=NULL){
	value=p->val;
	if(value=m){
		tmp->nxt=p->nxt;
		p->nxt=tmp;}
		p=p->nxt;
		}
	}
	return head;
	Display(head);
	}




int Delete(int n){
	exit(0);
	}

struct node *Delete(struct node *head,int num)
{
 struct node *tail,*tmp;
 int no,value,value1;
 printf("\nEnter the number you want to delete: ");
 scanf("%d",&no);
 tail->nxt=NULL; 
 value=head->val;
 value1=tail->val;
 if(value==no)
 {
  tmp=head;
  head=head->nxt;
  free(tmp);
 }
 else if(value1==no){
  for(tmp=head;tmp!=NULL;tmp=tmp->nxt){
   if(tmp->nxt->val==no){
    tmp->nxt=NULL;
    free(tail);
    tail=tmp;
   }//if
  }//for
 }//else if 
 else{   
  for(tmp=head;tmp!=NULL;tmp=tmp->nxt){
   if(tmp->nxt->val==no){
    tmp=tmp->nxt;
    free(tail);
    tail=tmp;
   }//if
  }//for
  
 return head;
}


struct node *Search(struct node *head,int num)
{
 struct node *tmp;
 int mid,value,i=1;
 mid=num; 
 tmp=head;
 if(mid%2==0)
 { 
  tmp=head;
  mid=num/2;
  for(i=1;i<mid;i++)
  {
   tmp=tmp->nxt;
  }
  printf("\nThe first element is: %d",tmp->val);
  tmp=tmp->nxt;
  printf("\nThe second element is: %d",tmp->val); 
 } 
 else{
  tmp=head;
  mid=num/2;
  for(i=1;i<=mid;i++)
  {
   tmp=tmp->nxt;
  }
  printf("\nThe first element is: %d",tmp->val);
 }
}


void main()
{
	int c,nu,d;
	char sol;
	struct node *head;
	ab:printf("\n\t\tMENU");
	printf("\nPress 1 to enter elements to a linked list. ");
	printf("\nEnter your choice: ");
	scanf("%d",&c);
	switch(c){
		case 1:{
		  printf("\nEnter the number of elements: ");
		  scanf("%d",&nu);
		  head=EndNode(nu);
		  break;
		 }
		default:{
			printf("\nYou entered the wrong choice re try.");
			goto ab;
	  	}
 	}
	do{
		bc:printf("\n\t\tSelect your option.");
		printf("\n1)Insertion.");
		printf("\n2)Delete.");
		printf("\n3)Search.");
		printf("\n4)Display the list.");
		printf("\nEnter your option: ");
		scanf("%d",&d);
		switch(d){
			case 1:{
	   			head=Insert(head,nu);
           			nu=nu+1;
	   			break;
	  			}
			case 2:{
				nu=Delete(nu);
				break;
	  			}
			case 3:{
				Search(head,nu);
	   			break;
	  			}
			case 4:{
				Display(head);
	   			break;
	  			}
   			default:{
	    			printf("\nOption not selected.");
	    			goto bc;
	   			}
			}
		printf("\nContinue?: ");
		scanf(" %c",&sol);
		}//do
	while(sol=='y');




}
