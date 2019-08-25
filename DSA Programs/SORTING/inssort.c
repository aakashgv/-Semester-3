#include<stdio.h>

void insert(int arr[], int n){
int i, key, j;

for(i=1; i<n; i++){
  key=arr[i];
  j=i-1;
  while(j>=0 && arr[j]>key)
   {arr[j+1]=arr[j];
   j=j-1;
   }
  arr[j+1]=key;
 }
printf("\n After Sorting: ");
for(i=0; i<n; i++)
printf("%d ", arr[i]);
}

void main(){
int i, n, a[50];
printf("\n Enter size of array: ");
scanf("%d", &n);
printf("\n Enter Array: ");
for(i=0; i<n; i++)
scanf("%d", &a[i]); 

printf("\n Array Entered= ");
for(i=0; i<n; i++)
printf("%d ", a[i]);

insert(a, n);
}
