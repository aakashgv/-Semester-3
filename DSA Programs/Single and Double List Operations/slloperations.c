#include <stdio.h>

#include <malloc.h>

struct node

{   int value;
    struct node *next;

};
struct node *head= NULL, *tail= NULL, *newnode, *temp, *ptr, *prev;



struct node *create_node (int x){
newnode= (struct node *) malloc(sizeof(struct node));
if( NULL == newnode){
printf("\n Memory was not allocated");
}
else {
newnode->value= x;
newnode->next= NULL;
 }
}

void disp_list(){

int i, cnt=0;
ptr=head;
while (NULL!= ptr ){
         printf("\n %d", ptr->value);
         ptr = ptr->next;
         cnt = cnt + 1;
}
}

void disp_mid(){
int i, cnt=0;
ptr= head;
while (NULL!= ptr){
 ptr = ptr->next; 
 cnt = cnt + 1;
}

if( cnt%2==0){ 
  ptr= head;
  cnt= cnt/2;

  for(i=0; i<cnt; i++){
  ptr= ptr->next;
  }

  printf("\n First Middle Element= %d \n", ptr->value);
  cnt--;
  ptr= head;

  for(i=0; i<cnt; i++){
  ptr= ptr->next;
  }

  printf("\n Second Middle Element= %d", ptr->value);
}

else{
ptr= head;
cnt= cnt/2;

for(i=0; i<cnt; i++){
ptr= ptr->next;
}
printf("\n Middle Element= %d \n", ptr->value);


 }
}

void insert_node_first(){   
     int x;
    printf("\nEnter the value for the node:");
    scanf("%d", &x);
    newnode = create_node(x);
    if (head == tail && head == NULL){
        head = tail = newnode;
        head->next = NULL;
        tail->next = NULL;
    }

    else{ //CHECK THIS
        temp = head;
        head = newnode;
        head->next = temp;
    }
    printf("\nINSERTED");    
}

void insert_node_last()

{    int x;
    printf("\nEnter the value for the Node:");    
    scanf("%d", &x);
    newnode = create_node(x);
    if (head == tail && tail == NULL){
        head = tail = newnode;
        head->next = NULL;
        tail->next = NULL;
    }
    else{ 
        tail->next = newnode;
        tail = newnode;
        tail->next = NULL;
    }

 printf("\nINSERTED");
}    

void delete_pos(){
    int pos, cnt = 0, i;

    if (head == NULL){
        printf(":No node to delete\n");
    }

    else{
        printf("\nEnter the position of value to be deleted:");
        scanf(" %d", &pos);

        ptr = head;
        if (pos == 1){
            head = ptr->next;
            printf("\nElement deleted");    
        }
        else{
            while (ptr != NULL){
                ptr = ptr->next;
                cnt = cnt + 1;
            }
            if (pos > 0 && pos <= cnt){
                 ptr = head;
                for (i = 1;i < pos;i++){
                    prev = ptr;
                    ptr = ptr->next;
                }
                prev->next = ptr->next;

            }
            else{
                printf("Position is out of range");
            }

        free(ptr);
        printf("\nElement deleted");
        }
    }
}



 int main()

 {

    int ch;
    char ans = 'Y';
    while (ans == 'Y'||ans == 'y')
    {   printf("\nOperations on singly linked list\n");
        printf("\n1.Insert node at first");
        printf("\n2.Insert node at last");
        printf("\n3.Delete Node from any Position");
        printf("\n4.Display");
 	    printf("\n5.Display Middle Element");
        printf("\n6.Exit \n");
        printf("\nEnter your choice");
        scanf("%d", &ch);
        switch (ch){
        case 1: 
            printf("\nInserting node at first\n");
            insert_node_first();
            break;
        case 2: 
            printf("\nInserting node at last\n");
            insert_node_last();
            break;
        case 3: 
            printf("\nDeleting Node from any Position\n");
            delete_pos();
            break;
        case 4:
            printf("\n YOUR LIST IS DISPLAYED: \n");
            disp_list();
            break;
 	    case 5:
               disp_mid();
               break;
        case 6: 
            printf("\nExiting\n");
            return 0;
            break;
        default: 
            printf("\nInvalid Choice\n");
            break;

        }

        printf("\nYOU WANT TO CONTINUE? (Y/N)");

        scanf(" %c", &ans);

    }

    return 0;

 }
