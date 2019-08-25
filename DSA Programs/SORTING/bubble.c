#include<stdio.h>

void swap(int *xp, int *yp){
int temp= *xp;
*xp = *yp;
*yp= temp;
}

void bubble(int arr[], int n){
int i, j;

for(i=0; i<n-1; i++){
 for(j=0; j<n-1; j++){
	if(arr[j]>arr[j+1])
	swap(&arr[j], &arr[j+1]);
	
	}
 
 }

printf("\n Sorted Array: ");
for(i=0; i<n; i++)
printf(" %d ", arr[i]);
}

void main(){
int i, a[50], num;

printf("\n Enter size of array: ");
scanf("%d", &num);
printf("\n Enter Array: ");
for(i=0; i<num; i++)
scanf("%d", &a[i]);

printf("\n Array Entered= ");
for(i=0; i<num; i++)
printf("%d ", a[i]);

bubble(a,num);

}
