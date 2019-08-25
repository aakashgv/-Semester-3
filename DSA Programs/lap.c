#include<stdio.h>
#include<stdlib.h>
struct node{
	int val;
	struct node *nxt;
	struct node *prev;
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
struct node *EndNode(int n){
	struct node *head,*tmp,*tail;
	int i,x;
	head=NULL;
	tail=NULL;
	if(n<=0){
		printf("\nValue not allowed");
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
struct node *Display(struct node *head)
{
	struct node *tmp;
	tmp=head;
	printf("\nThe array is: ");
	while(tmp!=NULL){
		printf("%d ",tmp->val);
		tmp=tmp->nxt;
	}
return head;
}
struct node *findmid(struct node *head,int n)
{
	struct node *tmp,*temp,*t1,*t2;
	int i,mid,mid1,count=0;
	if(n%2!=0){
		mid=n/2;
	}
	else{
		mid=n/2;
		mid1=mid+1;
	}
	tmp=head;
	for(i=0;i<mid;i++){
		tmp=tmp->nxt;
 }
	if(n%2!=0){
		printf("\nMiddle Element: %d ",tmp->val);
	}
	else{
		printf("\nTwo Middle Elements: %d %d",tmp->val,tmp->prev->val);
 	}
	temp=tmp;
	t1=tmp;
	if(n%2!=0)
	{
		for(i=0;i<mid;i++)
		{
			tmp=tmp->prev;
			temp=temp->nxt;
			if(tmp->val==temp->val)
				count++;
			else 
				count=0;
		}
	}
	else{
		temp=t1;
		tmp=t1->prev;
		for(i=0;i<mid;i++){
			if(tmp->val==temp->val)
				count++;
			else 
				count=0;
			tmp=tmp->prev;
			temp=temp->nxt;
		}
 }
	if(count!=0)
		printf("\nPallindrome.");
	else 
		printf("\nNot Pallindrome.");
	return head;
}  
 
void main()
{
	int number;
	printf("\nNumber of elements: ");
	scanf("%d",&number);
	head=EndNode(number);
	head=Display(head);
	head=findmid(head,number);
}
 
