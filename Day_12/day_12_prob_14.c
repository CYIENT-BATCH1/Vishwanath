#include <stdio.h>

int main()
{ int a1[5],a2[5],a3[5];

printf("enter the elements for array1\n");
for(int i=0;i<5;i++)
{
    scanf(" %d",&a1[i]);
}
printf("enter the elements for array2\n");
for(int i=0;i<5;i++)
{
    scanf(" %d",&a2[i]);
}
printf("enter the elements for array3\n");
for(int i=0;i<5;i++)
{
    scanf(" %d",&a3[i]);
}
printf("enter the elements for array1\n");
for(int i=0;i<5;i++)
{
    printf("%d",a1[i]);
}
printf("\n");
printf("enter the elements for array2\n");
for(int i=0;i<5;i++)
{
    printf("%d",a2[i]);
}
printf("\n");
printf("enter the elements for array3\n");
for(int i=0;i<5;i++)
{
    printf("%d",a3[i]);
}
printf("\n");

int i,j,k;
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        for(k=0;k<5;k++)
        {
          if((a1[i]==a2[j])&&(a2[j]==a3[k]))
          {
              printf("the common elements in the 3 array's are %d %d %d\n",a1[i],a2[j],a3[k]);
          }
          
        }
    }
}
return 0;
}
