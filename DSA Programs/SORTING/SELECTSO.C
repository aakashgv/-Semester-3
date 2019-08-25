#include<stdio.h>
#include<conio.h>

void swap(int *xp, int *yp){
int tmp= *xp;
*xp= *yp;
*yp= tmp;
}

void select_sort(int arr[], int n){
int i,j, min_idx;

for(i=0; i<n-1; i++){
 min_idx=i;
 for(j=i+1; j<n; j++){
  if(arr[j]<arr[min_idx])
   min_idx=j;
  }
 swap(&arr[min_idx], &arr[i]);
 }

 printf("\n Sorted Array: ");
 for(i=0; i<n; i++)
 printf("%d ", arr[i]);
}


void main(){

int i, a[50], n;
printf("\n Enter Array Size: ");
scanf("%d", &n);
printf("\n Enter Array: ");
for(i=0; i<n; i++)
scanf("%d", &a[i]);

select_sort(a,n);
getch();
}