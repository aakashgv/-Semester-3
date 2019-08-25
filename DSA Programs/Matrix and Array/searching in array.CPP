#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[20],i,n;
 printf("\nEnter the size of the array: ");
 scanf("%d",&n);
 printf("\nEnter the content of the array: ");
 for(i=2;i<=(2*n);i+=2)
 {
  scanf("%d",&arr[i]);
 }
 for(i=2;i<=(2*n);i+=2)
 {
  printf("\nThe element is %d at position: %d",arr[i],i);
 }
 getch();
}