#include<stdio.h>
#include<stdlib.h>

struct tree{
 int key;
 
 struct tree *rt,*lt;
           };

struct tree *root;
int height,c;

struct tree *newNode(int value)
{
    struct tree *temp;
    temp=(struct tree *)malloc(sizeof(struct tree));
    temp->key=value;
    temp->lt=NULL;
    temp->rt=NULL;
    return temp;
}

void iop(struct tree *root)
{
    if (root != NULL)
    {
        iop(root->lt);
        printf("%d \n", root->key);
        iop(root->rt);
    }
}
  
struct tree *search(struct tree *root, int key)
 { 
    
    if (root == NULL || root->key == key){
       return root; 
             c=1;                       }

    if (root->key < key){
          height++; 
       return search(root->rt, key);
                    }

     else{   
      height++;
    return search(root->lt, key);
  
         }
}

struct tree *insert(struct tree *node, int key)
{
 
    if (node == NULL){
     return newNode(key);
                     }

    if (key < node->key)
        node->lt  = insert(node->lt, key);
    else if (key > node->key)
        node->rt = insert(node->rt, key);   
 

    return node;
}



main(){
    struct tree *root = NULL;
    int ch,n,x,k,conti;
 a:
  printf(" MAIN MENU");
  printf("\n1.insert elements");
  printf("\n2.search element");
  printf("\n3.display BST");
  
  printf("\n enter your choice- ");
  scanf("%d",&ch);                                                 
  
  switch(ch){
  case 1: printf("\n enter the number of elements you want to input in the tree");
           scanf("%d",&n);
           int i;
           printf("\n enter the value u want to enter in the tree- ");
           for(i=0;i<n;i++){
           scanf("%d",&x);  
           if(NULL==root){
           root=insert(root,x);
                         }
           else{
           insert(root,x);
               }         
                           } 
           break;
  case 2: printf("\n enter the elements you want to search in the tree");
           scanf("%d",&k);
           struct tree *find;
           find=search(root,k);
          
         if(c==1){
          printf("\n element found at height 1");
                  }
         else{
          if(find){
          printf("\n element is found at %d height",(height+1));
                   }
          else{ 
          printf("\n element was not found height");
              }
             }0
                 
                 
       
                 
                 
                 
                    
          break;
           
  case 3: iop(root);                   
          break;
 default:printf("\n wrong input,try again");
            } 
            

printf("\n do you want to continue(yes:0|no:1)");
scanf("%d",&conti);

 if(conti==0){
 goto a;
              }
 else{
 printf("\n thanks for running program");              
      }
      
 }
