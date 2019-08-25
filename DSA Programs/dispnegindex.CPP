#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[30],n,i;
 printf("\nEnter the size of the array: ");
 scanf("%d",&n);
 printf("\nEnter the content of the array: ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\nEnter the element you want to display from the array: ");
 int x;
 scanf("%d",&x);
 if(x<0)
 {
  x=-1*x;
 }
 printf("\nThe element you want to display is: %d",arr[x]);
 getch();
}