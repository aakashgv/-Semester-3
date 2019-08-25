#include<stdio.h>
#include<string.h>
void main()
{ int n; char c[20];
  int i;
  struct folder
  { int val;
   char nm[20];
  }arr[10];

  printf("Enter no. of elements: ");
  scanf("%d", &n);
  printf("Enter array indices and values");

  for(i=0; i<n; i++)
  { scanf("%s", &arr[i].nm);
    scanf("%d", &arr[i].val);
  }
  printf("Enter index for value");
  scanf("%s", &c);
  for(i=0; i<n; i++)
  {
   if(strcmp(c, arr[i].nm)==0)
   printf(" value= %d", arr[i].val);
  }
}