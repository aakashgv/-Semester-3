#include<stdio.h>
 
void divide(int a[],int i,int j);
void sort(int a[],int i1,int x,int i2,int y);
 
void main()
{
 int a[30],n,i;
 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);
 printf("Enter the elements of the array: ");    
 for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
 divide(a,0,n-1);   
 printf("\nArray in the ascending order is: ");
 for(i=0;i<n;i++)
  {printf("%d ",a[i]);}
}
 
void divide(int a[],int i,int j)
{
 int mid;
 if(i<j)
 {
  mid=(i+j)/2;
  divide(a,i,mid);
  divide(a,mid+1,j);
  sort(a,i,mid,mid+1,j); 
 }
}
 
void sort(int a[],int i1,int x,int i2,int y)
{
 int temp[50]; 
 int i,j,k;
 i=i1; 
 j=i2;
 k=0;
 while(i<=x && j<=y)
 {
  if(a[i]<a[j])
    temp[k++]=a[i++];
  else
    temp[k++]=a[j++];
 }
 while(i<=x)
  temp[k++]=a[i++];        
 while(j<=y)
  temp[k++]=a[j++];
 for(i=i1,j=0;i<=y;i++,j++)
   a[i]=temp[j];
}
