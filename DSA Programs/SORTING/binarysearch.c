#include<stdio.h>

int binary(int arr[], int n, int x){

int l=0, r=n-1;

while(l<=r){
 int mid= l+ (r-l)/2;
 
 if(x==arr[mid])
  {printf("\n Element found at position %d", mid+1); return 0;}
 else if(x<arr[mid])
  r= mid-1;
 else if(x>arr[mid])
  l=mid+1; 
 }

return 0;
}

void main(){
int val, num, a[50], i;
printf("\n Enter size of array: ");
scanf("%d", &num);
printf("\n Enter Array: ");
for(i=0; i<num; i++)
scanf("%d", &a[i]);

printf("\n Enter value to be searched: ");
scanf("%d", &val);

binary(a, num, val);

}
