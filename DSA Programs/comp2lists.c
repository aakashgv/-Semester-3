#include<stdio.h>
#include<malloc.h>

struct node{
int info;
struct node *ptr;
};
struct node *h1=NULL, *h2=NULL, *t1=NULL, *t2=NULL, *prt, *tmp, *new;

struct node *create_node(int x){
new= (struct node*)malloc(sizeof(struct node));

if(new==NULL)
	printf("\n Node not initialized!");
else{
 new->info=x;
new->ptr=NULL;
 }

}

void ins_one(){
int val;
printf("\n Enter Value: ");
scanf("%d", &val);

tmp= create_node(val);

if(h1==NULL && h1==t1)
	h1=t1=tmp;
else{
 t1->ptr=tmp;
 t1=tmp; 
 }

}

void ins_two(){
int val;
printf("\n Enter Value: ");
scanf("%d", &val);

tmp= create_node(val);

if(h2==NULL && h2==t2)
	h2=t2=tmp;
else{
 t2->ptr=tmp;
 t2=tmp; 
 }

}

void sameord(){
struct node *start1, *start2;
int count=0;
start1=h1; start2=h2;
while(start1!=NULL && start2!=NULL){
  if(start1->info!= start2->info)
  	count++;
  start1=start1->ptr;
  start2=start2->ptr;
  }

if(count>0)
 printf("\n THEY DON'T HAVE IDENTICAL ELEMENTS IN SAME ORDER");
else
 printf("\n THEY HAVE IDENTICAL ELEMENTS IN SAME ORDER");

}

void difford(){
struct node *start1, *start2;
int count=0, num=0;

start1=h1; start2=h2;

while(start1!=NULL){
 num++;
 start1= start1->ptr;
}
start1=h1;

while(start1!=NULL){
  while(start2!=NULL){
   
   if(start2->info==start1->info)
   count++;
   
   start2= start2->ptr;
   }
  start2=h2;
  start1= start1->ptr;
 }

if(count==num)
 printf("\n IDENTICAL ELEMENTS ALBEIT ORDER");
else
 printf("\n NON IDENTICAL ELEMENTS ALBEIT ORDER");

}

void main(){

char ans='y', an='y';
printf("\n Enter First Linked List: ");
while(ans=='y'){
 ins_one();
 printf("\n Enter More? (y/n): ");
 scanf(" %c", &ans);
 }

printf("\n Enter Second Linked List: ");
while(an=='y'){
 ins_two();
 printf("\n Enter More? (y/n): ");
 scanf(" %c", &an);
}

prt=h1;
printf("\n First Linked List= ");
while(prt!=NULL){
 printf(" %d", prt->info);
 prt=prt->ptr;
 }
prt=h2;
printf("\n Second Linked List= ");
while(prt!=NULL){
 printf(" %d", prt->info);
prt= prt->ptr;
 }

sameord();
printf("\n");
difford();

}

