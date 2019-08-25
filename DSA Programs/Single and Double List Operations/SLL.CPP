#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node{
 int value;
 struct node *next;
};

struct node *ptr, *head=NULL, *tail=NULL, *newnode, *tmp;

struct node* create_node(int x){
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
		if(NULL==newnode)
		printf("\n Memory not allocated!");
		else{
		newnode->value=x;
		newnode->next=NULL;

		}
return newnode;
}

void ins_nodebeg(){
 int val;
 printf("\n Enter the value: ");
 scanf("\n %d", &val);

 struct node *tmp= create_node(val);

 if(head==NULL && head==tail){
   head= tail= tmp;
 }
 else{
   tmp->next= head;
   head=tmp;
 }

}

void ins_nodeend(){
int val;
printf("\n Enter Value: ");
scanf("%d", &val);
struct node *tmp= create_node(val);

if(tail==NULL && tail==head){
 head=tail=tmp;
}
else{
 tmp->next= NULL;
 tail->next= tmp;
 tail=tmp;
 }

}

void ins_nodemid(){
int val, pos;
printf("\n Enter Position after which element is to be inserted: ");
scanf("%d", &pos);
printf("\n Enter Value: ");
scanf("%d", &val);

int c=0;
ptr= head;
while( ptr!= NULL){
 c++;
 ptr= ptr->next;
 }

ptr= head;
for(int i=0; i<pos-1; i++){
   ptr= ptr->next;
}

for(i=0; i<c; i++){
	if(i==pos-1)
		{
		struct node *tmp= create_node(val);
		tmp->next= ptr->next;
		ptr->next= tmp;
		}

		  }

}

void del_nodepos(){
int pos;
printf("\n Enter Position of node to be deleted: ");
scanf("%d", &pos);

int c=0;
ptr=head;
while(ptr!=NULL){
 c++;
 ptr= ptr->next;
 }

ptr=head;
for(int i=0; i<pos-2; i++){
 ptr=ptr->next;
}

tmp= ptr->next;
ptr->next= ptr->next->next;
free(tmp);

}

void del_nodebeg(){
tmp=head;
head= head->next;
free(tmp);
}

void del_nodeend(){

ptr=head;
while(ptr->next->next!=NULL){
 ptr=ptr->next;
 }
tmp= tail;
ptr->next=NULL;
tail= ptr;
free(tmp);
}

int main()
{ clrscr();
  char ans='y';
  int a;
  int ch;

  printf("\n ----SINGLE LINKED LIST---- \n ");
A:
  printf("\n Choose: \n 1. Insertion at beginning \n 2. Insertion at end \n 3. Insertion in middle \n 4. Deletion at beginning \n 5. Deletion at end \n 6. Deletion in middle \n 7. Display \n 8. Exit \n     ");
  scanf("%d", &ch);

  switch(ch)
 {
	case 1: while(ans=='y'){
		ins_nodebeg();
		printf("\n Enter More? ");
		scanf(" %c", &ans);
		}
		printf("\n New List: \n ");
		ptr= head;
		while(ptr!=NULL)
		{
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		goto A;
		break;

	case 2: char an= 'y';
		while(an=='y'){
		ins_nodeend();
		printf("\n Enter More? ");
		scanf(" %c", &an);
		}
		printf("\n New List: \n ");
		ptr= head;
		while(ptr!=NULL)
		{
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		goto A;
		break;
	case 3: ins_nodemid();
		printf("\n New List: \n ");
		ptr= head;
		while(ptr!=NULL)
		{
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		goto A;
		break;
	case 4: del_nodebeg();
		ptr=head;
		printf("\n New List: ");
		while(ptr!=NULL){
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		goto A;
		break;
	case 5: del_nodeend();
		ptr=head;
		printf("\n New List: ");
		while(ptr!=NULL){
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		goto A;
		break;
	case 6: char c= 'y';
		while(c=='y'){
		del_nodepos();
		ptr=head;
		printf("\n New List: ");
		while(ptr!=NULL){
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		printf("\n Delete More?(y/n): ");
		scanf(" %c", &c);
		}
		goto A;
		break;
	case 7: ptr= head;
		while(ptr!=NULL)
		{
		printf("%d ", ptr->value);
		ptr= ptr->next;
		}
		goto A;
		break;
	case 8: return 0;
		break;



 }


  getch();
  return 0;
}
