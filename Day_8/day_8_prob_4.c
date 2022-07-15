#include <stdio.h>
int main()
{
 int a[4],i,j,n;
 int *p;
 p=a;
 //rintf("Enter the number of array elements\n");
 printf("enter the elements\n");
 for(i=0;i<4;i++)
 {
 scanf(" %d",&a[i]);
 }
  printf("The array elements are\n");
 for(i=0;i<4;i++)
 {
 printf("%d",*(p+i));
 }
 
 for(i=0;i<4;i++)
 {
     for(j=i+1;j<4;j++)
     {
         if(*(p+i)>*(p+i+j))
         {
             n=*(p+i);
             *(p+i)=*(p+j);
             *(p+j)=n;
         }
     }
 }
 printf("the  sorted array elements are\n");
 for(i=0;i<4;i++)
 {
 printf("%d",*(p+i));
 }
 
     return 0;
 }
