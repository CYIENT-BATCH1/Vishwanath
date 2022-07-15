#include<stdio.h>
int main()
{
    int size,key,low=0,high,mid;
    printf("enter the size\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key element\n");
    scanf("%d",&key);
    high=size-1;
    while(low != high)
       {
           mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("key element found in position %d\n",mid);
            printf("the array element is %d\n",arr[mid]);
            low = high;
        }
        else if(arr[mid]<key)
        {
           low=mid+1;
        }
        else 
        {
            high=mid-1;
        }
       }
return 0;
}
